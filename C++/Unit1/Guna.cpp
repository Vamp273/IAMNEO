/*
Problem Statement

Guna is developing a banking application that allows customers to deposit money into their accounts. The bank provides each customer
 with an initial balance of 50 rupees. To facilitate the deposit process, Guna has created a class called AddAmount.
This class represents a transaction to add a specific amount of money to a customer's account. After the transaction is completed, 
the total amount in the customer's account is printed.

Note: This is a sample question asked in a Deloitte interview.

Input format :
The input consists of a single integer, representing the additional amount to be deposited into the customer's account (the deposit amount).

Output format :
The output displays the total amount in the customer's account after the deposit.

Code constraints :
The input deposit amount is a non-negative integer.

The maximum value for the deposit amount depends on the data type used to store the value, which is an int in this case.

Sample test cases :
Input 1 :
400
Output 1 :
450

Input 2 :
250
Output 2 :
300

Whitelist
Set 1:
50
class AddAmount
*/

// You are using GCC
#include<iostream>
using namespace std;

class AddAmount {
    private:
        int balance;
        
    public:
        AddAmount(){
            balance = 50;
        }
        
        void deposit(int amount){
            if(amount >= 0){
                balance += amount;
            }
        }
        void displayBalance(){
            cout << balance << endl;
        }
};

int main(){
    int depositAmount;
    cin >> depositAmount;
    
    AddAmount account;
    account.deposit(depositAmount);
    account.displayBalance();
    
    return 0;
}
