# https://atcoder.jp/contests/abc199/tasks/abc199_b

from typing import *

def solve(n: int, a: List[int], b: List[int]) -> int:
    ans = 0
    if max(a) <= min(b):
        ans = min(b) - max(a) + 1
    return ans

def main() -> None:
    n = int(input())
    a = list(map(int, input().split()))
    assert len(a) == n
    b = list(map(int, input().split()))
    assert len(b) == n
    ans = solve(n, a, b)
    print(ans)

if __name__ == '__main__':
    main()
