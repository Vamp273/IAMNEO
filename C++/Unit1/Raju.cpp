/*
Problem Statement

Raju is developing a banking system that stores customer information, including their name, account number, and balance. The program
 should utilizes a union called Customers to represent customer data. Additionally, it includes a function called increment_balance 
 that increments the balance of customers if it is greater than 1000.

Create a union called customers that has the name, account number, and balance amount of the customers.

Write a function that prints the balance of all the customers who have more than Rs. 1000 in their balance, increments their 
balance by 100, and then prints the incremented value in the output.

Function Name: void increment_balance(union customers c[], int n)

Note: This is a sample question asked in a Capgemini interview.

Input format :
The first line of the input consists of the number of customers N.

The next n lines consist of the name, account number, and balance of each customer separated by a space.

Output format :
The output displays all the balances which are above 1000 by incrementing the value by 100 separated by space.

Code constraints :
1 <= N <= 20

Sample test cases :
Input 1 :
3
alice 15 150
anne 16 1500
elsa 17 180
Output 1 :
1600 

Whitelist
Set 1:
union Customers
void increment_balance(Customers c[], int n)
*/

#include <iostream> 
 using namespace std; 
  union Customers{ 
    char name[50]; 
    int accountNumber; 
    double balance; 
  }; 
    
void increment_balance(Customers c[], int n) 
{ 
    for(int i = 0; i <n;i++) 
    { 
        if (c[i].balance > 1000) 
        { 
            cout << c[i].balance + 100 << " "; 
            c[i].balance += 100; 
        } 
    } 
} 
        
int main () 
{ 
    int N; 
    cin >> N; 
    Customers customerData[N]; 
                               
    for (int i = 0; i <N; i++) 
    { 
        cin >> customerData[i].name>> customerData[i].accountNumber>>customerData[i].balance; 
    } 
                                           
    increment_balance(customerData, N); 
    return 0;
}