/*
Problem Statement

Write a program to insert an element at a specific position in an array. The program should prompt the user to enter the position and the value to be inserted and then display the updated array.

Input format :
The first line of input consists of an integer, which represents the size of the array.

The second line of input consists of the elements of the array, separated by space.

The third line of input consists of an integer, which represents the position where they want to insert a new element.

The last line of input consists of an integer, which represents the value to be inserted at the specified position.

Output format :
The output displays the original array before insertion and the updated array after insertion.

Refer to the sample output for formatting specifications.

Code constraints :
Maximum size of the array (MAX_SIZE = 100).

The size of the array should be a positive integer.

The position where the user wants to insert the element should be a valid position within the array bounds (between 1 and size + 1, inclusive).

The elements of the array can be both positive and negative integers.

Sample test cases :
Input 1 :
5
1 2 3 4 5
3
10
Output 1 :
Original array: 1 2 3 4 5 
Updated array: 1 2 10 3 4 5 
Input 2 :
5
1 2 3 4 5
8
10
 
Output 2 :
Original array: 1 2 3 4 5 
Invalid position!
*/

#include <iostream>

int main() {
    const int MAX_SIZE = 100; // Maximum size of the array
    int arr[MAX_SIZE]; // Array to store the elements
    int size; // Actual size of the array

    // Read the size of the array from the user
    //std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Read the elements of the array from the user
   // std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
       // std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // Display the original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Prompt the user to enter the position and value to be inserted
    int position, value;
   // std::cout << "Enter the position where you want to insert the element: ";
    std::cin >> position;
    //std::cout << "Enter the value to be inserted: ";
    std::cin >> value;

    // Validate the position
    if (position < 1 || position > size + 1) {
        std::cout << "Invalid position!" ;
        return 0;
    }

    // Shift the elements to the right to make space for the new element
    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position - 1] = value;

    // Increment the size of the array
    size++;

    // Display the updated array
    std::cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

