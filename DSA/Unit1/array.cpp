/*
Problem Statement
You are given an array of integers representing the prices of a product over a period of time. Your task is to modify the array in such a way that each element is replaced by the product of its neighboring elements. The first and last elements will be replaced by the product of themselves and their adjacent element.

Note: This kind of question will be helpful in clearing Capgemini recruitment.

Input format :
The first line contains an integer n, representing the size of the array.

The second line contains n space-separated integers representing the elements of the array.

Output format :
The output consists of the modified array after performing the required operations, with each element separated by a space.

Code constraints :
The array size will be less than or equal to 50.

The array elements will be integers.

Sample test cases :
Input 1 :
5
2 3 4 5 6
Output 1 :
6 8 15 24 30 
Input 2 :
3
10 20 30
Output 2 :
200 300 600 
*/

#include<iostream> 
using namespace std; 
int main() 
{  
    int n,arr[50];
    cin>>n;
    for (int i=0; i<n; i++) 
    cin>> arr[i]; 
    
    // if (n <= 1) 
    //   return; 
  
    int prev = arr[0]; 
    arr[0] = arr[0] * arr[1]; 
  
    for (int i=1; i<n-1; i++) 
    { 
        int curr = arr[i]; 
  
        arr[i] = prev * arr[i+1]; 
  
        prev = curr; 
    } 
  
    arr[n-1] = prev * arr[n-1]; 
    
    // modify(arr, n1); 
    for (int i=0; i<n; i++) 
      cout << arr[i] << " "; 
    return 0; 
} 