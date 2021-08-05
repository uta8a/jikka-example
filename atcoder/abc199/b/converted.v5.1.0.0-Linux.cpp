// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc199/tasks/abc199_b
//     
//     from typing import *
//     
//     def solve(n: int, a: List[int], b: List[int]) -> int:
//         ans = 0
//         if max(a) <= min(b):
//             ans = min(b) - max(a) + 1
//         return ans
//     
//     def main() -> None:
//         n = int(input())
//         a = list(map(int, input().split()))
//         assert len(a) == n
//         b = list(map(int, input().split()))
//         assert len(b) == n
//         ans = solve(n, a, b)
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
int64_t solve(int64_t n_0, std::vector<int64_t> a_1, std::vector<int64_t> b_2) {
    int64_t x7;
    int64_t x3 = * std::max_element(a_1.begin(), a_1.end());
    int64_t x4 = * std::min_element(b_2.begin(), b_2.end());
    if (x3 <= x4) {
        int64_t x5 = * std::min_element(b_2.begin(), b_2.end());
        int64_t x6 = * std::max_element(a_1.begin(), a_1.end());
        x7 = x5 - x6 + 1;
    } else {
        x7 = 0;
    }
    return x7;
}
int main() {
    int64_t n_8 = -1;
    std::cin >> n_8;
    std::vector<int64_t> a_9(n_8, -1);
    std::vector<int64_t> b_10(n_8, -1);
    for (int32_t i11 = 0; i11 < n_8; ++ i11) {
        std::cin >> a_9[i11];
    }
    for (int32_t i12 = 0; i12 < n_8; ++ i12) {
        std::cin >> b_10[i12];
    }
    auto ans_13 = solve(n_8, a_9, b_10);
    std::cout << ans_13 << ' ';
    std::cout << '\n' << ' ';
}
