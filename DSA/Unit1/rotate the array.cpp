/*
Problem Statement

Given an array of integers, write a program to rotate the array to the right by a specified number of positions. The program should prompt the user to enter the number of positions to rotate and then display the updated array.

Input format :
The first line of input contains an integer representing the size of the array.

The second line of input contains the elements of the array, separated by a space.

The last line of input contains an integer to enter the number of positions to rotate the array.

Output format :
The output displays the original array before rotation and the updated array after rotation.

Refer to the sample output for formatting specifications.

Code constraints :
Maximum size of the array (MAX_SIZE = 100).

The size of the array should be a positive integer.

The elements of the array can be any integer.

The number of positions to rotate the array can be positive

Sample test cases :
Input 1 :
6
1 2 3 4 5 6
2
Output 1 :
Original array: 1 2 3 4 5 6 
Updated array: 5 6 1 2 3 4 
Input 2 :
7
12 65 34 80 38 51 72
10
Output 2 :
Original array: 12 65 34 80 38 51 72 
Updated array: 38 51 72 12 65 34 80 
Input 3 :
5
8 -2 3 -4 6
4
Output 3 :
Original array: 8 -2 3 -4 6 
Updated array: -2 3 -4 6 8 
*/

#include <iostream>
using namespace std;

int main() {
        const int MAX_SIZE = 100;
            int size, positions;
            
                cin >> size;
                    int arr[MAX_SIZE];
                        for (int i = 0; i < size; i++) {
                                    cin >> arr[i];
                        }
                            cin >> positions;
                            
                                int rotatedArr[MAX_SIZE];
                                    for (int i = 0; i < size; i++) {
                                                rotatedArr[(i + positions) % size] = arr[i];
                                    }
                                    
                                        cout << "Original array:";
                                            for (int i = 0; i < size; i++) {
                                                        cout << " " << arr[i];
                                            }
                                                cout << endl;
                                                
                                                    cout << "Updated array:";
                                                        for (int i = 0; i < size; i++) {
                                                                    cout << " " << rotatedArr[i];
                                                        }
                                                            cout << endl;
                                                            
                                                                return 0;
}