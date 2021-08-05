// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc206/tasks/abc206_b
//     
//     from typing import *
//     
//     def solve(n: int) -> int:
//         c = 0
//         ans = 0
//         flag = True
//         for i in range(100000): # (10^5)^2 > 10^9
//             c += i
//             if c >= n and flag:
//                 ans = i
//                 flag = False
//         return ans
//     
//     def main() -> None:
//         n = int(input())
//         ans = solve(n)
//         print(ans)
//     
//     if __name__ == '__main__':
//         main()
#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <iostream>
#include <numeric>
#include <string>
#include <tuple>
#include <vector>
int64_t solve(int64_t n_0) {
    bool x1_5 = true;
    int64_t x1_6 = 0;
    int64_t x1_7 = 0;
    for (int32_t x2 = 0; x2 < 100000; ++ x2) {
        x1_5 = n_0 <= x2 + x1_7 and x1_5 ? false : x1_5;
        x1_6 = n_0 <= x2 + x1_7 and x1_5 ? x2 : x1_6;
        x1_7 = x2 + x1_7;
    }
    return x1_6;
}
int main() {
    int64_t n_8 = -1;
    std::cin >> n_8;
    auto ans_9 = solve(n_8);
    std::cout << ans_9 << ' ';
    std::cout << '\n' << ' ';
}
