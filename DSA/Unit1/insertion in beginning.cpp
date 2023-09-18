/*
Problem Statement

Write a program to insert an element at the beginning of an array and shift all the existing elements to the right. The program should prompt the user to enter the value to be inserted and then display the updated array.

Input format :
The first line of input contains an integer representing the size of the array.

The second line of input contains the elements of the array, separated by a space.

The last line of input contains an integer to enter the value to be inserted at the beginning of the array.

Output format :
The output displays the original array before insertion and the updated array after insertion.

Refer to the sample output for formatting specifications.

Code constraints :
Maximum size of the array (MAX_SIZE = 100).

The size of the array should be a positive integer.

The elements of the array can be any integer.

The value to be inserted can be any integer.

Sample test cases :
Input 1 :
5
1 2 3 4 5
6
Output 1 :
Original array: 1 2 3 4 5 
Updated array: 6 1 2 3 4 5 
Input 2 :
7
12 65 34 80 38 51 72
10
Output 2 :
Original array: 12 65 34 80 38 51 72 
Updated array: 10 12 65 34 80 38 51 72 
Input 3 :
5
8 -2 3 -4 6
4
Output 3 :
Original array: 8 -2 3 -4 6 
Updated array: 4 8 -2 3 -4 6 
*/

#include <iostream>
int main() {
const int MAX_SIZE = 100;
int n;
std::cin >> n;
int arr[MAX_SIZE];
for (int i = 0; i < n; ++i) {
std::cin >> arr[i];}
int newValue;
std::cin >> newValue;
std::cout << "Original array:";
for (int i = 0; i < n; ++i) {
std::cout << " " << arr[i];}
std::cout << std::endl;                                                                
for (int i = n - 1; i >= 0; --i) {
arr[i + 1] = arr[i];}
arr[0] = newValue;
std::cout << "Updated array:";                                                                                
for (int i = 0; i <= n; ++i) {
std::cout << " " << arr[i];}
std::cout << std::endl;
return 0;
}