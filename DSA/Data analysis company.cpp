/*
Problem Statement

You are developing a program for a data analysis company that specializes in linguistic research. The company needs a program that can reverse the order of characters in an array of words. Your task is to write a program that takes user input for the size of the array and the words in the array. The program should reverse the characters in each word of the array while preserving the order of the words, and display the updated array.

Input format :
The first line of input consists of an integer that represents the size of the array.

The next line of input consists of the characters in the array, separated by spaces.

Output format :
The program outputs a single line displaying the updated sentence with the characters reversed.

Code constraints :
The size of the array should be a positive integer.

The array can store a maximum of 100 characters.

The input characters can be any printable ASCII characters.

Sample test cases :
Input 1 :
4
A B C D
Output 1 :
Updated array: D C B A 
Input 2 :
10
9 8 6 7 8 3 1 2 4 8 
Output 2 :
Updated array: 8 4 2 1 3 8 7 6 8 9 
Input 3 :
8
S T R I N G S !
Output 3 :
Updated array: ! S G N I R T S 
*/

#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(char arr[], int size) {
    reverse(arr, arr + size);
}

int main() {
    const int MAX_SIZE = 100;
    char arr[MAX_SIZE];
    int size;

    // Input the size of the array
    cin >> size;

    // Input the characters in the array
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to reverse the array
    reverseArray(arr, size);

    // Display the updated array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}