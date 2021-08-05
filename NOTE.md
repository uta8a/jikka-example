# note
```shell
# command
../../../jikka-v5.1.0.0-Linux convert main.py

```

# mainの後ろのnewlineがないときとあるときでエラーが違う
```shell
$ ../../../jikka-v5.1.0.0-Linux convert main.py 
Syntax Error (line 0 column 1) (user's mistake?): Jikka.Python.Parse.Happy.run failed: `Dedent' is got, but `NEWLINE' is expected
<invalid loc>
```
これ、
```
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

