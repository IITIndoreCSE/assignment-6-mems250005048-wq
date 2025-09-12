//  Write a program in C++ with a function called add to add two complex numbers and another function called subtract to subtract one complex number from another. 







#include <iostream>
#include <string>
#include <sstream> // <-- ADD THIS LINE
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex add(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }

    // Parse string like "3+4i" or "3-4i"
    static Complex parse(const string& s) {
        double r = 0, i = 0;
        char op, ch;
        stringstream ss(s); // works now
        ss >> r >> op >> i >> ch;  
        if (op == '-') i = -i;
        return Complex(r, i);
    }
};

int main() {
    string s1, s2;

    cout << "Complex number 1: ";
    cin >> s1;
    cout << "Complex number 2: ";
    cin >> s2;

    Complex c1 = Complex::parse(s1);
    Complex c2 = Complex::parse(s2);

    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);

    cout << "\nSum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    return 0;
}











/* Test Case 1
Input:
Complex Number 1: 3 + 2i
Complex Number 2: 1 + 4i
Output:
Sum: 4 + 6i
Difference: 2 – 2i
Test Case 2
Input:
Complex Number 1: 5 + 7i
Complex Number 2: 2 + 3i
Output:
Sum: 7 + 10i
Difference: 3 + 4i */
