#include <iostream>

void DoSomething2(int a) {
    std::cout << &a << std::endl;
    if (a > 0) {
        DoSomething2(a - 1);
        std::cout << a << std::endl;
    }
}

void DoSomething() {
    int a = 5;
    std::cout << &a << std::endl;
    DoSomething2(a);
}

void AddOne(int& x) {
    x += 1;
}

void AddOneWithPointer(int* x) {
    *x += 1;
}

void AddOneNotWorking(int x) {
    x += 1;
}

int main() {
    int a = 10;
    std::cout << sizeof(int) << std::endl;
    std::cout << &a << std::endl;
//    DoSomething();

    int* b = &a;
    std::cout << b << std::endl;
    std::cout << *b << std::endl;
    *b = 11;
    std::cout << *(&a) << std::endl;
    b += 1;
    std::cout << b << std::endl;
    std::cout << *b << std::endl;

    void* b2 = b;
    std::cout << b2 << std::endl;
//    b2 += 1;
//    std::cout << *b2 << std::endl;

    float* x = (float*)&a;
    std::cout << x << std::endl;
    std::cout << *x << std::endl;

    int& y = a;
    std::cout << y << std::endl;
    y += 1;
    std::cout << y << std::endl;
    std::cout << a << std::endl;
    AddOne(a);
    AddOneWithPointer(&a);
    AddOneNotWorking(a);
    std::cout << a << std::endl;
    return 0;
}



