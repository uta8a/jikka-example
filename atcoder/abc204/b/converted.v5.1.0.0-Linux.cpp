// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc204/tasks/abc204_b
//     
//     from typing import *
//     
//     def solve(n: int, a: List[int]) -> int:
//         ans = 0
//         for e in a:
//             if e > 10:
//                 ans += e - 10
//         return ans
//     
//     def main() -> None:
//         n = int(input())
//         a = list(map(int, input().split()))
//         assert len(a) == n
//         ans = solve(n, a)
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
int64_t solve(int64_t n_0, std::vector<int64_t> a_1) {
    int64_t x2 = 0;
    for (int64_t x3 : a_1) {
        x2 = 10 < x3 ? x2 + x3 - 10 : x2;
    }
    return x2;
}
int main() {
    int64_t n_6 = -1;
    std::cin >> n_6;
    std::vector<int64_t> a_7(n_6, -1);
    for (int32_t i8 = 0; i8 < n_6; ++ i8) {
        std::cin >> a_7[i8];
    }
    auto ans_9 = solve(n_6, a_7);
    std::cout << ans_9 << ' ';
    std::cout << '\n' << ' ';
}
