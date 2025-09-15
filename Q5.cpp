// Write a program to populate a character array with letters of the alphabet at random; subsequently the letters in the array should be arranged alphabetically (without using the sort function).

#include <iostream>
using namespace std;

// Function to swap characters
void swapChar(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Function to sort array alphabetically (Selection Sort)
void sortAlphabet(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swapChar(arr[i], arr[minIndex]);
    }
}

int main() {
    int size;

    // Ask user for length
    cout << "Enter length of array: ";
    cin >> size;

    char letters[size];

    // Ask user to enter letters
    cout << "Enter " << size << " letters: ";
    for (int i = 0; i < size; i++) {
        cin >> letters[i];
    }

    // Print entered letters
    cout << "Random letters: [";
    for (int i = 0; i < size; i++) {
        cout << "'" << letters[i] << "'";
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Sort letters alphabetically
    sortAlphabet(letters, size);

    // Print sorted letters
    cout << "Sorted letters: [";
    for (int i = 0; i < size; i++) {
        cout << "'" << letters[i] << "'";
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}











/* Test Case 1
Input:
Random letters: ['m', 'g', 'x', 'a', 'p', 'b', 'f', 'q', 't', 'd']
Output:
Sorted letters: ['a', 'b', 'd', 'f', 'g', 'm', 'p', 'q', 't', 'x'] */
