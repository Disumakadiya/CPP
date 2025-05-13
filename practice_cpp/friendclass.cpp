#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator {
public:
    Complex add(Complex c1, Complex c2);
};

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Declare Calculator as a friend class
    friend class Calculator;
};

// Definition of Calculator's add method
Complex Calculator::add(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.2, 4.8);

    Calculator calc;
    Complex result = calc.add(c1, c2);

    cout << "Sum of complex numbers: ";
    result.display();

    return 0;
}
