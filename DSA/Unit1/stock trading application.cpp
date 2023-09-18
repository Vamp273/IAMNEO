/*
Problem Statement

You are developing a stock trading application that analyzes the price changes of a particular stock over a given time period. The application receives the daily closing prices of the stock, stored in array a, along with the corresponding threshold values for each day, stored in array b. Your task is to determine the number of instances where the price difference between consecutive days meets or exceeds the corresponding threshold.

Write a program that takes the size of the arrays as input, followed by the elements of arrays a and b. The program should output the count of instances where the price difference between consecutive days meets or exceeds the corresponding threshold.

Note: This kind of question will be helpful in clearing TCS recruitment.

Input format :
The first line of input consists of an integer n, the size of the arrays.

The second line of input consists of n space-separated integers representing the daily closing prices of the stock,

denoted as a[0] to a[n-1].

The third line of input consists of n space-separated integers representing the threshold values for each day,

denoted as b[0] to b[n-1].

Output format :
The output consists of a single line containing an integer, representing the count of instances where the price difference meets or exceeds the threshold.

Code constraints :
The size of the arrays will be a positive integer.

The arrays a and b will have the same size.

The elements in array a and b will be integers.

Sample test cases :
Input 1 :
5
10 20 15 30 25
5 10 10 15 5
Output 1 :
2
Input 2 :
4
10 20 30 40
5 5 5 5
Output 2 :
3
*/
//1st solution
#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]-j)>=b[i]){k++;}
        j=a[i];
    }
    printf("%d",k);
    return 0;
}


//2nd solution
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i + 1] - a[i]) >= abs(b[i]))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
