#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= N; ++j) {
            std::cout << std::pow(i * j, 2) << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}