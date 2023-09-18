/*
Problem Statement



You are developing a data analysis tool for a statistics company. The company needs a program that can analyze the frequency of elements in an array of integers. Your task is to write a program that takes user input for the size of the array and the elements of the array. The program should calculate the frequency of each element in the array and display the elements along with their frequencies.



Note: This kind of question will be helpful in clearing AMCAT tests.

Input format :
The first line of input consists of an integer that represents the size of the array.

The second line of input consists of an integer that represents the elements of the array, separated by spaces.

Output format :
The program outputs a series of lines, each representing an element and its frequency in the array.



Refer to the sample output for formatting specifications.

Sample test cases :
Input 1 :
5
1 2 1 3 2
Output 1 :
Element   Frequency
1         2
2         2
3         1
Input 2 :
6
4 2 4 4 6 2
Output 2 :
Element   Frequency
4         3
2         2
6         1
*/

#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 100;

void findFrequency(int arr[], int size) {
    int freq[MAX_SIZE] = {0};

    // Calculate the frequency of each element
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Display the elements along with their frequencies
    cout << "Element   Frequency" << endl;
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] != 0) {
            cout << arr[i] << "         " << freq[arr[i]] << endl;
            freq[arr[i]] = 0; // Reset frequency to avoid duplicates
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    // Input the size of the array
   
    cin >> size;

    // Input the elements of the array
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to find the frequency of each element
    findFrequency(arr, size);

    return 0;
}