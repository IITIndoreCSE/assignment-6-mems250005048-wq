// Write a program in C++ to create a function called join that joins two smaller arrays and creates a larger one. The two small arrays should be passed as parameters in the function and the larger array should be returned.

#include <iostream>
using namespace std;


int* join(int arr1[], int size1, int arr2[], int size2) {
    int* result = new int[size1 + size2]; 

    
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

    
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }

    return result; 
}

int main() {
    int size1, size2;

    cout << "Enter size of Array1: ";
    cin >> size1;
    int* arr1 = new int[size1];
    cout << "Enter elements of Array1: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of Array2: ";
    cin >> size2;
    int* arr2 = new int[size2];
    cout << "Enter elements of Array2: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }


    int* joined = join(arr1, size1, arr2, size2);

    cout << "Joined Array: [";
    for (int i = 0; i < size1 + size2; i++) {
        cout << joined[i];
        if (i < size1 + size2 - 1) cout << ", ";
    }
    cout << "]" << endl;

  
    delete[] arr1;
    delete[] arr2;
    delete[] joined;

    return 0;
}













Array2: [4, 5]
Output:
Joined Array: [1, 2, 3, 4, 5]
Test Case 2
Input:
Array1: [10, 20]
Array2: [30, 40, 50]
Output:
Joined Array: [10, 20, 30, 40, 50] */
