/*
Problem Statement

A retail store wants to calculate the total cost of an item based on its number and cost. The store has an Item class that encapsulates
 the item's details and provides a method to calculate the total cost based on the quantity.

Write a program to calculate the total cost of an item based on its item number, cost, and quantity purchased.

Define a member function outside the class definition and make it inline by just using the qualifier inline in the header line
 of the function definition.

Note: This is a sample question asked in a Capgemini interview.

Input format :
The first line of input consists of an integer representing the item number.

The second line of input consists of a floating-point number representing the cost of the item.

The last line consists of an integer representing the quantity of the item purchased.

Output format :
A single-line output displaying the total cost of the item, formatted to two decimal places

Sample test cases :
Input 1 :
123
4.99
3
Output 1 :
Total cost: 14.97

Input 2 :
456
2.49
10
Output 2 :
Total cost: 24.90

Whitelist
Set 1:
class Item
inline void Item
inline float Item
*/

// You are using GCC
#include <iostream>
#include<iomanip>

class Item
{
    private:
        int itemNumber;
        float cost;
        
    public:
        void setDetails(int num, float c);
        inline float calculateTotalCost(int quantity);
};

inline void Item::setDetails(int num, float c)
{
    itemNumber = num;
    cost = c;
}

inline float Item::calculateTotalCost(int quantity)
{
    return cost * quantity;
}

int main()
{
    Item item;
    int itemNumber, quantity;
    float cost;
    
    std::cin >> itemNumber >> cost >> quantity;
    
    item.setDetails(itemNumber, cost);
    
    float totalCost = item.calculateTotalCost(quantity);
    
    std::cout << "Total cost: " << std::fixed << std::setprecision(2) << totalCost << std::endl;
    
    return 0;
}