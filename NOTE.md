# note
```shell
# command
../../../jikka-v5.1.0.0-Linux convert main.py

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

