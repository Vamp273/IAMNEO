/*
Problem Statement

A hospital wants to store the information of its patients. Help them by providing a code. Your code should create a structure to
 store the information of patients coming to the hospital. The information stored will be the patient id, the patient’s gender
  (1 for Male and 2 for Female), and the age of the patient. There may be n number of patients visiting the hospital, where n
   will not exceed 50 at any time.

Write a program to accept the information for n patients. Write a function to find the total number of male and female patients visited.
Also, write a function that prints the patients whose age is greater than 40.

Function specifications:﻿

void print_gender - To calculate the count of male and female patients.
void print_age - To calculate the count of patients whose age is above 40.


Note: This is a sample question asked in a TCS interview.

Input format :
The first line consists of an integer n, representing the number of patients.

The next n lines contain the patient details, each line consisting of three space-separated integers: id, gender, and age.

Output format :
The first line displays the count of male and female patients separated by a space.

The second line displays the count of patients above 40 years.

Sample test cases :
Input 1 :
3 
110 2 25 
210 2 55 
220 1 62 
Output 1 :
1 2
2

Input 2 :
4
115 2 35 
205 2 65 
303 1 52 
403 2 72 
Output 2 :
1 3
3

Whitelist
Set 1:
struct patient
void print_gender
void print_age
*/

// You are using GCC
#include<iostream>
using namespace std;

struct patient
{
    int id;
    int gender;
    int age;
};

void print_gender(patient patients[], int n)
{
    int maleCount = 0, femaleCount =0;
    for(int i=0; i<n; i++)
    {
        if(patients[i].gender == 1 )
        {
            maleCount++;
        }
        else if(patients[i].gender == 2)
        {
            femaleCount++;
        }
    }
    
    cout<<maleCount << " " << femaleCount << endl;
};

void print_age(patient patients[], int n)
{
    int above40Count = 0;
    for(int i=0; i<n; ++i)
    {
        if (patients[i].age > 40)
        {
            above40Count++;
        }
    }
    cout << above40Count << endl;
}

int main()
{
    int n;
    cin >> n;
    patient patients[50];
    
    for(int i=0; i<n; ++i)
    {
        cin >> patients[i].id >> patients[i].gender >> patients[i].age;
    }
    
    print_gender(patients, n);
    print_age(patients, n);
    
    return 0;
}