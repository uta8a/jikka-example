# https://atcoder.jp/contests/abc191/tasks/abc191_b

from typing import *

def solve(n: int, x: int, a: List[int]) -> List[int]:
    ans = []
    for i in range(n):
        if a[i] != x:
            ans.append(a[i])
    return ans

def main() -> None:
    n, x = map(int, input().split())
    a = list(map(int, input().split()))
    assert len(a) == n
    ans = solve(n, x, a)
    print(*ans)

if __name__ == '__main__':
    main()
