// Write a program that asks the user for an integer number and finds the sum of all natural numbers up to that number.








#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a number greater than 0." << endl;
        return 0;
    }

    int sum = 0;

    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of natural numbers up to " << n << " is " << sum << endl;

    return 0;
}















/* Test Case 1
Input:
Number: 5
Output:
Sum: 15
Test Case 2
Input:
Number: 10
Output:
Sum: 55 */
