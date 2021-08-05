# jikka-example
v5.1.0.0-Linuxで確認

pythonコードでのACは確認いらないが、問題の切り分けのため行っている

# 進捗
- abc212 - 200のB問題を確認

# note
- :heavy_minus_sign: 問題が仕様上対象ではない(文字列出力など)
- :sob: 問題としては適格だが、うまくいかなかった(コントリビューションチャンス)
- :white_check_mark: 問題を生成されたC++コードでACできた1

# list
- :heavy_minus_sign: `atcoder/abc212/b/main.py`
  - 出力形式が文字列
  - 解こうとした
- :heavy_minus_sign: `atcoder/abc211/b/main.py`
  - 出力形式が文字列
- :heavy_minus_sign: `atcoder/abc210/b/main.py`
  - 出力形式が文字列
- :heavy_minus_sign: `atcoder/abc209/b/main.py`
  - 出力形式が文字列
- :sob: [`atcoder/abc208/b/main.py`](atcoder/abc208/b/main.py)
  - 出力形式が数値
  - PythonコードはAC https://atcoder.jp/contests/abc208/submissions/24786840
  - 生成されたC++はコンパイルが通る
  - :sob: 生成されたC++はサンプルが合わない [ローカルでの `oj t` の結果](./atcoder/abc208/b/result_as_generated_cpp)
  - :sob: 生成されたC++はWA https://atcoder.jp/contests/abc208/submissions/24786892
- :white_check_mark: [`atcoder/abc207/b/main.py`](atcoder/abc207/b/main.py)
  - 出力形式が数値
  - PythonコードはAC https://atcoder.jp/contests/abc207/submissions/24787342
  - 生成されたC++はコンパイルが通る
  - 生成されたC++はサンプルが合う
  - 生成されたC++はAC https://atcoder.jp/contests/abc207/submissions/24787336
  - :heavy_plus_sign: `/^` を使用しても通った https://atcoder.jp/contests/abc207/submissions/24787491
- :sob: [`atcoder/abc206/b/main.py`](atcoder/abc206/b/main.py)
  - 出力形式が数値
  - PythonコードはAC https://atcoder.jp/contests/abc206/submissions/24787819
  - 生成されたC++はコンパイルが通る
  - :sob: 生成されたC++はサンプルが合わない [ローカルでの `oj t` の結果](./atcoder/abc206/b/result_as_generated_cpp)
  - :sob: 生成されたC++はWA https://atcoder.jp/contests/abc206/submissions/24787804
- :heavy_minus_sign: `atcoder/abc205/b/main.py`
  - 出力形式が文字列
- :white_check_mark: [`atcoder/abc204/b/main.py`](atcoder/abc204/b/main.py)
  - 出力形式が数値
  - PythonコードはAC https://atcoder.jp/contests/abc204/submissions/24788109
  - 生成されたC++はコンパイルが通る
  - 生成されたC++はサンプルが合う
  - 生成されたC++はAC https://atcoder.jp/contests/abc204/submissions/24788117
- :sob: [`atcoder/abc203/b/main.py`](atcoder/abc203/b/main.py)
  - 出力形式が数値
  - PythonコードはAC https://atcoder.jp/contests/abc203/submissions/24788520
  - 生成されたC++はコンパイルが通る
  - :sob: 生成されたC++はサンプルが合わない [ローカルでの `oj t` の結果](./atcoder/abc203/b/result_as_generated_cpp)
  - :sob: 生成されたC++はWA https://atcoder.jp/contests/abc203/submissions/24788528
- :heavy_minus_sign: `atcoder/abc202/b/main.py`
  - 文字列操作をするのでめんどくさそう
- :heavy_minus_sign: `atcoder/abc201/b/main.py`
  - 出力形式が文字列
- :sob: [`atcoder/abc200/b/main.py`](atcoder/abc200/b/main.py)
  - 出力形式が数値
  - PythonコードはAC https://atcoder.jp/contests/abc200/submissions/24788781
  - 生成されたC++はコンパイルが通る
  - :sob: 生成されたC++はサンプルが合わない [ローカルでの `oj t` の結果](./atcoder/abc200/b/result_as_generated_cpp)
  - :sob: 生成されたC++はWA https://atcoder.jp/contests/abc200/submissions/24788787
- :white_check_mark: [`atcoder/abc199/b/main.py`](atcoder/abc199/b/main.py)
  - 出力形式が数値
  - PythonコードはAC https://atcoder.jp/contests/abc199/submissions/24792987
  - 生成されたC++はコンパイルが通る
  - 生成されたC++はサンプルが合う
  - 生成されたC++はAC https://atcoder.jp/contests/abc199/submissions/24793007