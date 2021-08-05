# https://atcoder.jp/contests/abc212/tasks/abc212_b

from typing import *

def solve(x: int) -> int:
    xs = [x//1000]
    x -= x//1000*1000
    for i in range(2, -1, -1):
        xa = x//(10**i)
        xs.append(xa)
        x -= xa*10**i
    flag1 = True
    flag2 = True
    for i in range(3):
        if xs[i] != xs[i+1]:
            flag1 = False
        if (xs[i] + 1) % 10 != xs[i+1]:
            flag2 = False
    if flag1 or flag2:
        return 0
    return 1

def main() -> None:
    x = int(input())
    ans = solve(x)
    if ans == 0:
        print("Weak")
    else:
        print("Strong")

if __name__ == '__main__':
    main()
