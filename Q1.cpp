//  Write a program in C++ with a function called add to add two complex numbers and another function called subtract to subtract one complex number from another. 

#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};


Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}
Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}


void printComplex(Complex c) {
    cout << c.real;
    if (c.imag >= 0)
        cout << " + " << c.imag << "i";
    else
        cout << " - " << -c.imag << "i";
}

int main() {
    Complex c1, c2, sum, diff;
    char sign, i;


    cout << "Enter Complex Number 1 (in format a + bi): ";
    cin >> c1.real >> sign >> c1.imag >> i;
    if (sign == '-') c1.imag = -c1.imag;

    
    cout << "Enter Complex Number 2 (in format a + bi): ";
    cin >> c2.real >> sign >> c2.imag >> i;
    if (sign == '-') c2.imag = -c2.imag;


    sum = add(c1, c2);
    diff = subtract(c1, c2);


    cout << "Sum: ";
    printComplex(sum);
    cout << endl;

    cout << "Difference: ";
    printComplex(diff);
    cout << endl;

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
