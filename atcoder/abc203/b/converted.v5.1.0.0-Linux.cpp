// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc203/tasks/abc203_b
//     
//     from typing import *
//     
//     def solve(n: int, k: int) -> int:
//         a = []
//         for i in range(1,n+1):
//             for j in range(1,k+1):
//                 a.append(100*i + j)   
//         ans = sum(a)
//         return ans
//     
//     def main() -> None:
//         n, k = map(int, input().split())
//         ans = solve(n, k)
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
int64_t solve(int64_t n_0, int64_t k_1) {
    std::vector<int64_t> x2;
    for (int32_t x3 = 0; x3 < n_0; ++ x3) {
        for (int32_t x7 = 0; x7 < k_1; ++ x7) {
            x2.push_back(x3 * 100 + x7 + 201);
        }
    }
    int64_t x11 = std::accumulate(x2.begin(), x2.end(), 0);
    return x11;
}
int main() {
    int64_t n_12 = -1;
    int64_t k_13 = -1;
    std::cin >> n_12;
    std::cin >> k_13;
    auto ans_14 = solve(n_12, k_13);
    std::cout << ans_14 << ' ';
    std::cout << '\n' << ' ';
}
