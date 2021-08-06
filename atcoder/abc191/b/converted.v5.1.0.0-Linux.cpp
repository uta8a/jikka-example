// This C++ code is transpiled using Jikka transpiler v5.1.0.0 https://github.com/kmyk/Jikka
// The original Python code:
//     # https://atcoder.jp/contests/abc191/tasks/abc191_b
//     
//     from typing import *
//     
//     def solve(n: int, x: int, a: List[int]) -> List[int]:
//         ans = []
//         for i in range(n):
//             if a[i] != x:
//                 ans.append(a[i])
//         return ans
//     
//     def main() -> None:
//         n, x = map(int, input().split())
//         a = list(map(int, input().split()))
//         assert len(a) == n
//         ans = solve(n, x, a)
//         print(*ans)
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
std::vector<int64_t> solve(int64_t n_0, int64_t x_1, std::vector<int64_t> a_2) {
    std::vector<int64_t> x3;
    for (int32_t x4 = 0; x4 < n_0; ++ x4) {
        std::vector<int64_t> x8;
        if (a_2[x4] == x_1) {
            x8 = x3;
        } else {
            std::vector<int64_t> x7 = x3;
            x7.push_back(a_2[x4]);
            x8 = x7;
        }
        x3 = x8;
    }
    return x3;
}
int main() {
    int64_t n_9 = -1;
    int64_t x_10 = -1;
    std::cin >> n_9;
    std::vector<int64_t> a_11(n_9, -1);
    std::cin >> x_10;
    for (int32_t i12 = 0; i12 < n_9; ++ i12) {
        std::cin >> a_11[i12];
    }
    auto ans_13 = solve(n_9, x_10, a_11);
    for (int32_t i14 = 0; i14 < int32_t(ans_13.size()); ++ i14) {
        std::cout << ans_13[i14] << ' ';
    }
    std::cout << '\n' << ' ';
}
