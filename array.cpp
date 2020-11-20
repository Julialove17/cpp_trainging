#include <iostream>


class Array {
public:
    int* start;
    size_t size;

    Array(size_t n): start(new int[n]), size(n) {
        std::cout << "Array created!\n";
    }

    ~Array(){
        std::cout << "Array deleted!\n";
        delete[] start;
    }

    int& operator[](size_t index) {
        return *(start + index);
    }
};

//int GetSum(int a, int b) {
//    int c = a + b;
//    return c;
//}

int main() {
    Array array(10);
    Array array2(12);
//    std::cout << GetSum(x, 5) << std::endl;
    array[1] = 123;
    array.operator[](1) = 456;
    std::cout << array[1] << std::endl;
    int n(30);
    int* a(new int[n]);
    float* b = new float[30];
    *a = 1;
    *(a + 1) = 12;
    *(a + 2) = 24;
    std::cout << *a << std::endl;
    std::cout << *(a + 1) << std::endl;
    std::cout << *(a + 2) << std::endl;
    std::cout << a[1] << std::endl;
    delete[] a;
    delete[] b;
    return 0;
}
