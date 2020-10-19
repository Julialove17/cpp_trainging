#include <iostream>

int GetSum(int a, int b) {
    return a + b;
}

int main() {
    int c;
    int d;
    std::cin >> c >> d;
    std::cout << GetSum(c, d) << std::endl;
    return 0;
}
