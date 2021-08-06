# https://atcoder.jp/contests/abc193/tasks/abc193_b

from typing import *

def solve(n: int, a: List[int], p: List[int], x: List[int]) -> int:
    ans = -1
    for i in range(n):
        if x[i] - a[i] > 0:
            if ans == -1:
                ans = p[i]
            else:
                ans = min(ans, p[i])
    return ans

def main() -> None:
    n = int(input())
    a = list(range(n))
    p = list(range(n))
    x = list(range(n))
    for i in range(n):
        a[i], p[i], x[i] = map(int, input().split())
    ans = solve(n, a, p, x)
    print(ans)

if __name__ == '__main__':
    main()
