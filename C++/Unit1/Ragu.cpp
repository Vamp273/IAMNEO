/*
Problem Statement

Ragu wants to create a program to store and display personal information about individuals. He decided to create a class called Person
 to represent a person's details with a name, age, and gender as their private attributes. Initialize and display the same using member
 functions. The name and gender should be displayed in uppercase letters.

Note: This is a sample question asked in an Infosys interview.

Input format :
The input consists of the name as a string, age as an integer, and gender as a string of a person in separate lines.

Output format :
The output displays the name, age, and gender of the person separated by spaces.

The name and gender should be printed in uppercase letters.

Sample test cases :
Input 1 :
bob
28
male
Output 1 :
BOB 28 MALE

Whitelist
Set 1:
class Person
*/

// You are using GCC
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Person{
    private:
        string name;
        int age;
        string gender;
        
    public:
        void initialize(string n, int a, string g){
            name = n;
            age = a;
            gender = g;
        }
        
        void display(){
            transform(name.begin(), name.end(), name.begin(), ::toupper);
            transform(gender.begin(), gender.end(), gender.begin(), ::toupper);
        
            cout << name << " " << age << " " << gender << endl; 
        }
};

int main()
{
    Person person;
    string name, gender;
    int age;
    cin>> name >> age >> gender;
    
    person.initialize(name, age, gender);
    person.display();
    
    return 0;
}
