// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc193/tasks/abc193_b
//     
//     from typing import *
//     
//     def solve(n: int, a: List[int], p: List[int], x: List[int]) -> int:
//         ans = -1
//         for i in range(n):
//             if x[i] - a[i] > 0:
//                 if ans == -1:
//                     ans = p[i]
//                 else:
//                     ans = min(ans, p[i])
//         return ans
//     
//     def main() -> None:
//         n = int(input())
//         a = list(range(n))
//         p = list(range(n))
//         x = list(range(n))
//         for i in range(n):
//             a[i], p[i], x[i] = map(int, input().split())
//         ans = solve(n, a, p, x)
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
int64_t solve(int64_t n_0, std::vector<int64_t> a_1, std::vector<int64_t> p_2, std::vector<int64_t> x_3) {
    int64_t x4 = -1;
    for (int32_t x5 = 0; x5 < n_0; ++ x5) {
        x4 = 0 < - a_1[x5] + x_3[x5] ? x4 == -1 ? p_2[x5] : std::min<int64_t>(x4, p_2[x5]) : x4;
    }
    return x4;
}
int main() {
    int64_t n_8 = -1;
    std::cin >> n_8;
    std::vector<int64_t> a_9(n_8, -1);
    std::vector<int64_t> p_10(n_8, -1);
    std::vector<int64_t> x_11(n_8, -1);
    for (int32_t i_12 = 0; i_12 < n_8; ++ i_12) {
        std::cin >> a_9[i_12];
        std::cin >> p_10[i_12];
        std::cin >> x_11[i_12];
    }
    auto ans_13 = solve(n_8, a_9, p_10, x_11);
    std::cout << ans_13 << ' ';
    std::cout << '\n' << ' ';
}
