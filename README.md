# jikka-example
v5.1.0.0-Linuxで確認

# note
「解こうとした」のように書かれていない :x: の場合は解いてません。
- :x: 問題が仕様上対象ではない(文字列出力など)
- :sob: 問題としては適格だが、Jikka側の問題でうまくいかなかった(コントリビューションチャンス)

# list
- :x: `atcoder/abc212/b/main.py`
  - 出力形式が文字列
  - 解こうとした
- :x: `atcoder/abc211/b/main.py`
  - 出力形式が文字列
- :x: `atcoder/abc210/b/main.py`
  - 出力形式が文字列
- :x: `atcoder/abc209/b/main.py`
  - 出力形式が文字列
- :sob: `atcoder/abc208/b/main.py`
  - 出力形式が数値
  - PythonコードはAC https://atcoder.jp/contests/abc208/submissions/24786840
  - 生成されたC++はコンパイルが通る
  - :sob: 生成されたC++はサンプルが合わない [ローカルでの `oj t` の結果](./atcoder/abc208/b/result_as_generated_cpp)
  - :sob: 生成されたC++はWA https://atcoder.jp/contests/abc208/submissions/24786892
- :x: ``