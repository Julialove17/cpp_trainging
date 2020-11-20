#include <iostream>

void Print(double real, double imaginary) {
    std::cout << real << " + i * " << imaginary << std::endl;
}

void AddToNumber(double& first_real, double& first_imaginary, double second_real, double second_imaginary) {
    first_real += second_real;
    first_imaginary += second_imaginary;
}

class Complex {
public:
    double real;
    double imaginary;

    Complex() : real(0), imaginary(0) {
        std::cout << "Hi, I am constructor!\n";
    }

    Complex(double real2, double imaginary2) : real(real2), imaginary(imaginary2) {
    }

    void Print() {
        std::cout << real << " + i * " << imaginary << std::endl;
    }

    void AddToNumber(const Complex& other) {
        real += other.real;
        imaginary += other.imaginary;
    }
    ~Complex() {
        std::cout << "Hi, I am destructor!\n";
    }
};

int main() {
    Complex a;
    a.real = 10;
    a.imaginary = 11;
    a.Print();
    a.AddToNumber(a);
    a.Print();
    Complex b;
    b.real = 14;
    b.imaginary = 20;
    b.Print();
    b.AddToNumber(a);
    a.Print();
    Complex c(3, 4);
    c.Print();
    int x(5);
    std::cout << x << std::endl;
    int y = 10; // <=> int y(10);
    int z;
    return 0;
}

