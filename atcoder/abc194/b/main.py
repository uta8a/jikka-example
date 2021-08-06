# https://atcoder.jp/contests/abc194/tasks/abc194_b

from typing import *

def solve(n: int, xs: List[int], ys: List[int]) -> int:
    ans = 1000000
    for i in range(n):
        xsmin = min(xs[:i] + xs[i+1:])
        ysmin = min(ys[:i] + ys[i+1:])
        ans = min([ans, xs[i] + ys[i], max(xs[i], ysmin), max(ys[i], xsmin)])
    return ans

def main() -> None:
    n = int(input())
    xs = list(range(n))
    ys = list(range(n))
    for i in range(n):
        xs[i], ys[i] = map(int, input().split())
    ans = solve(n, xs, ys)
    print(ans)

if __name__ == '__main__':
    main()
