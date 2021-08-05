// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc208/tasks/abc208_b
//     
//     from typing import *
//     
//     def solve(p: int) -> int:
//         e = 1
//         cs = []
//         ans = 0
//         for i in range(10):
//             e *= i+1
//             cs.append(e)
//         for c in reversed(cs):
//             ans += p//c
//             p -= p//c * c
//         return ans
//     
//     def main() -> None:
//         p = int(input())
//         ans = solve(p)
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
#line 3 "jikka/divmod.hpp"
/**
 * @file jikka/divmod.hpp
 * @author Kimiyuki Onaka
 * @copyright Apache License 2.0
 */
#include <cassert>
#include <cstdint>

namespace jikka {

inline int64_t floordiv(int64_t n, int64_t d) {
  assert(d != 0);
  return n / d - ((n ^ d) < 0 && n % d);
}

inline int64_t floormod(int64_t n, int64_t d) {
  assert(d != 0);
  n %= d;
  return (n < 0 ? n + d : n);
}

inline int64_t ceildiv(int64_t n, int64_t d) {
  assert(d != 0);
  return n / d + ((n ^ d) >= 0 && n % d);
}

inline int64_t ceilmod(int64_t n, int64_t d) {
  assert(d != 0);
  return n - ceildiv(n, d) * d;
}

} // namespace jikka

#line 11 "main.cpp"
int64_t solve(int64_t p_0) {
    std::vector<int64_t> x1_11;
    int64_t x1_12 = 1;
    for (int32_t x2 = 0; x2 < 10; ++ x2) {
        x1_11.push_back(x2 * x1_12 + x1_12);
        x1_12 = x2 * x1_12 + x1_12;
    }
    std::reverse(x1_11.begin(), x1_11.end());
    int64_t x7_14 = 0;
    for (int64_t x8 : x1_11) {
        p_0 = - (x8 * jikka::floordiv(p_0, x8)) + p_0;
        x7_14 = x7_14 + jikka::floordiv(p_0, x8);
    }
    return x7_14;
}
int main() {
    int64_t p_15 = -1;
    std::cin >> p_15;
    auto ans_16 = solve(p_15);
    std::cout << ans_16 << ' ';
    std::cout << '\n' << ' ';
}
