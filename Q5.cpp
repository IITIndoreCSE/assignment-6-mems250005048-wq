// Write a program to populate a character array with letters of the alphabet at random; subsequently the letters in the array should be arranged alphabetically (without using the sort function).








#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
using namespace std;

int main() {
    int n;

    cout << "Enter the number of letters to generate: ";
    cin >> n;

    char* arr = new char[n];

    // Initialize random seed
    srand(time(0));

    // Populate array with random letters (uppercase A-Z)
    for (int i = 0; i < n; i++) {
        arr[i] = 'A' + rand() % 26;
    }

    // Display original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble sort to arrange alphabetically
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
	














/* Test Case 1
Input:
Random letters: ['m', 'g', 'x', 'a', 'p', 'b', 'f', 'q', 't', 'd']
Output:
Sorted letters: ['a', 'b', 'd', 'f', 'g', 'm', 'p', 'q', 't', 'x'] */
