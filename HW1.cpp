#include <iostream>
#include <chrono>

// 성능을 분석할 함수
void exampleFunction() {
    long long result = 0;
    for (int i = 0; i < 1000000; ++i) {
        result += i;
    }
    std::cout << "Result: " << result << std::endl;
}

// 시간 측정을 위한 함수
void measureTime() {
    auto start = std::chrono::high_resolution_clock::now();
    exampleFunction();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Time: " << elapsed.count() << " seconds" << std::endl;
}

int main() {
    std::cout << "Measuring time:" << std::endl;
    measureTime();
    return 0;
}
