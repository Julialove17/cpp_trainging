#include <iostream>

int PostfixPlusPlus(int& i) {
    i += 1;
    return i - 1;
}

int PrefixPlusPlus(int& i) {
    i += 1;
    return i;
}

class Vector {
public:
    int* start;
    size_t size;
    size_t capacity;

    Vector(): start(new int[4]), size(0), capacity(4){
    }

    void PushBack(int pb1) {
        if (size >= capacity) {
            int* a(new int[2 * capacity]);
            for (int i = 0; i < capacity; ++i) {
                *(a + i) = *(start + i);
            }
            delete[] start;
            start = a;
            capacity *= 2;
        }
        *(start + size) = pb1;
        ++size;
    }

    int& operator[](size_t num){
        return *(start + num);
    }

    ~Vector(){
        delete[] start;
    }
};

int main() {
    Vector v;
    for (int i = 0; i < 100; ++i) {
        v.PushBack(10 + i);
        v.PushBack(20 + i);
        v.PushBack(3 + i);
    }
    v[2] = 123;
    //v.operator[](2) = 123;
    for (int i = 0; i < 300; ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
