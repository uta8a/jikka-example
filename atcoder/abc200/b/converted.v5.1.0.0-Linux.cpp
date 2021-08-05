// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc200/tasks/abc200_b
//     
//     from typing import *
//     
//     def solve(n: int, k: int) -> int:
//         for _ in range(k):
//             if n % 200 == 0:
//                 n //= 200
//             else:
//                 n = n*1000 + 200
//         return n
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
    return n_0;
}
int main() {
    int64_t n_2 = -1;
    int64_t k_3 = -1;
    std::cin >> n_2;
    std::cin >> k_3;
    auto ans_4 = solve(n_2, k_3);
    std::cout << ans_4 << ' ';
    std::cout << '\n' << ' ';
}
