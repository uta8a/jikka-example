// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc207/tasks/abc207_b
//     
//     from typing import *
//     
//     def solve(a: int, b: int, c: int, d: int) -> int:
//         ans = -1
//         if d*c - b > 0:
//             ans = (a + d*c - b - 1) // (d*c - b) # ans = a /^ (d*c - b)
//         return ans
//     
//     def main() -> None:
//         a, b, c, d = map(int, input().split())
//         ans = solve(a, b, c, d)
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
int64_t solve(int64_t a_0, int64_t b_1, int64_t c_2, int64_t d_3) {
    return 0 < - b_1 + c_2 * d_3 ? jikka::floordiv(a_0 - b_1 + c_2 * d_3 - 1, - b_1 + c_2 * d_3) : -1;
}
int main() {
    int64_t a_4 = -1;
    int64_t b_5 = -1;
    int64_t c_6 = -1;
    int64_t d_7 = -1;
    std::cin >> a_4;
    std::cin >> b_5;
    std::cin >> c_6;
    std::cin >> d_7;
    auto ans_8 = solve(a_4, b_5, c_6, d_7);
    std::cout << ans_8 << ' ';
    std::cout << '\n' << ' ';
}
