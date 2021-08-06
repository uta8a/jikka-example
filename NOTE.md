# note
```shell
# command
../../../jikka-v5.1.0.0-Linux convert main.py

# testcase
oj d URL

# check
oj t -c "python3 main.py"
../../../jikka-v5.1.0.0-Linux convert main.py
g++ converted.v5.1.0.0-Linux.cpp
oj t -N

# file generate
oj t -c "python3 main.py" > result_as_python
../../../jikka-v5.1.0.0-Linux convert main.py > converted.v5.1.0.0-Linux.cpp
oj t -N > result_as_generated_cpp
```

とりあえずABC150まで調べよう。
あと現在最新headで壊れてないか調べたい(後で)


# mainの後ろのnewlineがないときとあるときでエラーが違う
```shell
$ ../../../jikka-v5.1.0.0-Linux convert main.py 
Syntax Error (line 0 column 1) (user's mistake?): Jikka.Python.Parse.Happy.run failed: `Dedent' is got, but `NEWLINE' is expected
<invalid loc>
```
これ、
```py
# ....
if __name__ == '__main__':
    main() # <- newlineなし
```
で起きた。
line 0と言われて一番上を見たが何もおかしくないので少しつまづいた

# 文字列が返せない
これは仕様？→仕様っぽい。

> solve 関数の戻り値の型は int, List[int], List[List[int]], List[List[List[int]]], ... のいずれか、あるいはそれらからなる Tuple でなければなりません。

とあった [Language Specification](https://github.com/kmyk/Jikka/blob/48a870d381b2c83add927ecb1af62158661e2840/docs/language.ja.md) ので、solveは0,1を返してmainでやろうとしたがだめそう

> expression statement
>    print("Hello")

これ利用不可能な例に書いてあった

# for文2つのlist内包表記はできない
```shell
$ ../../../jikka-v5.1.0.0-Linux convert main.py
Syntax Error (line 6 column 42) (user's mistake?): Jikka.Python.Parse.Happy.run failed: `For' is got, but `"]"' is expected
5 |def solve(n: int, k: int) -> int:
6 |    a = [100*i + j for i in range(1,n+1) for j in range(1,k+1)]
                                            ^^^
7 |    ans = sum(a)
```

これpython本家でできることが驚きだけど...

# listの直後にassertが必要
これは仕様。

```py
def main() -> None:
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    assert len(a) == n
    assert len(b) == n
    ans = solve(n, a, b)
    print(ans)
```
こういう風に間になんか入ると
```txt
Semantic Error (line 13 column 9) (user's mistake?): Jikka.RestrictedPython.Convert.ParseMain: after `xs = list(map(int, input().split()))', we need to write `assert len(xs) == n`
12 |    n = int(input())
13 |    a = list(map(int, input().split()))
            ^^^^
14 |    b = list(map(int, input().split()))
```

> xs = list(map(int, input().split())); assert len(xs) == n

書いてあったわ。これは仕様。

# グリッド文字列の受け取り方
現在だと以下のように `n` 行受け取るみたいなことができない？

```txt
Semantic Error (line 11 column 9) (user's mistake?): Jikka.RestrictedPython.Convert.ParseMain: assignments in main function must be `x = int(input())', `x, y, z = map(int, input().split())', `xs = list(map(int, input().split()))', `xs = list(range(n))' or `x, y, z = solve(a, b, c)'
10 |    h, w, x, y = map(int, input().split())
11 |    s = [input() for _ in range(h)]
            ^
12 |    ans = solve(h,w,x,y,s)
```

# 入力文字列も難しそう
出力文字列は仕様でできないが、入力文字列行けるかと思ったけど難しそう。strを受け付けない。

```txt
Semantic Error (line 5 column 56) (user's mistake?): Failed at Jikka.Python.Convert.ToplevelDecl: not a type: WithLoc {loc = Loc {line = 5, column = 56, width = 3}, value = Name (WithLoc {loc = Loc {line = 5, column = 56, width = 3}, value = Ident "str"})}
4 |
5 |def solve(h: int, w: int, x: int, y: int, s: List[List[str]]) -> int:
                                                          ^^^
6 |    ans = 0
```

# 入力形式が`N * 2`なのでループを`N`回回す必要があるタイプの入力
```txt
N
A_1 B_1
...
A_N B_N
```
みたいなやつ

```py
def main() -> None:
    n = int(input())
    xs = list(range(n))
    ys = list(range(n))
    for i in range(n):
        xs[i], ys[i] = map(int, input().split())
    ans = solve(n, xs, ys)
    print(ans)
```
こんな感じで行ける

