// Write a program in C++ to create a function called join that joins two smaller arrays and creates a larger one. The two small arrays should be passed as parameters in the function and the larger array should be returned.


#include <iostream>
using namespace std;

int main(){
  int size1;
  cout<<"Enter the number of elements:";
cin>>size1;
int Array1[size1];
cout<<"Enter "<<size1<<"elements:";
for(int i=0; i<size1; i++){
cin>>Array1[i];
}

int size2;
  cout<<"Enter the number of elements:";
cin>>size2;
int Array2[size2];
cout<<"Enter "<<size2<<"elements:";
for(int i=0; i<size2; i++){
cin>>Array2[i];
}
int joinedsize = size1+size2;
int JoinedArray[joinedsize];
for (int i=0; i < size1 ;i++){
JoinedArray[i] = Array1[i];
}
for (int i=0; i < size2 ;i++){
JoinedArray[size1 + i]=Array2[i]
}
cout<< "Joined Array:  ";
for (int i = o; i<joinedsize; i++){
  cout<< JoinedArray[i]<<" ";
}
cout << endl;
















/* Test Case 1
Input:
Array1: [1, 2, 3]
Array2: [4, 5]
Output:
Joined Array: [1, 2, 3, 4, 5]
Test Case 2
Input:
Array1: [10, 20]
Array2: [30, 40, 50]
Output:
Joined Array: [10, 20, 30, 40, 50] */
