// Write a program that populates an integer array, goes through it step by step and searches for a given number entered by the user. If the number is found, it should print “found” and return the position of the number; otherwise print “not found”.

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string input;
    int searchElement;

    // Input array in one line like [1, 3, 5, 7, 9]
    cout << "Enter Array (format [a, b, c]): ";
    getline(cin, input);

    // Remove brackets
    if (input.front() == '[') input.erase(0, 1);
    if (input.back() == ']') input.pop_back();

    // Parse numbers
    stringstream ss(input);
    vector<int> arr;
    int num;
    char comma;
    while (ss >> num) {
        arr.push_back(num);
        ss >> comma; // consume comma if present
    }

    // Input search number
    cout << "Enter number to search: ";
    cin >> searchElement;

    // Linear search
    int position = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == searchElement) {
            position = i; // 0-based index
            break;
        }
    }

    // Output
    if (position != -1)
        cout << "Found at position: " << position << endl;
    else
        cout << "Not found" << endl;

    return 0;
}


















/* Test Case 1
Input:
Array: [1, 3, 5, 7, 9]
Search: 5
Output:
Found at position: 2
Test Case 2
Input:
Array: [2, 4, 6, 8]
Search: 7
Output:
Not found */

