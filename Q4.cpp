// Write a program that populates an integer array, goes through it step by step and searches for a given number entered by the user. If the number is found, it should print “found” and return the position of the number; otherwise print “not found”.
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    int length;
    string input;
    int searchElement;


    cout << "Enter length of array: ";
    cin >> length;
    cin.ignore(); 
    cout << "Enter Array : ";
    getline(cin, input);


    if (!input.empty() && input.front() == '[') input.erase(0, 1);
    if (!input.empty() && input.back() == ']') input.pop_back();
    stringstream ss(input);
    vector<int> arr;
    int num;
    char comma;
    while (ss >> num) {
        arr.push_back(num);
        ss >> comma; 
    }

    
    if (arr.size() != length) {
        cout << "Error: Entered array length does not match the specified length!" << endl;
        return 1;
    }

    
    cout << "Enter number to search: ";
    cin >> searchElement;

    
    int position = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == searchElement) {
            position = i; // 0-based index
            break;
        }
    }

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

