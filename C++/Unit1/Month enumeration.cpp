/*
Problem Statement

The task for the student is to create a program that prompts the user to enter a number representing a month and displays the 
corresponding month as output. To accomplish this, the student should implement a class named Year that includes an enumeration 
called Month. The Month enumeration should consist of twelve constants representing the months of the year. The student needs to ensure
 that the program utilizes the Year class and the Month enumeration to correctly map the input number to the corresponding month name 
 for display.

Note: This is a sample question asked in an Infosys interview.

Input format :
The input consists of an integer representing the desired month number, n.

Output format :
If the input is a valid month (between 1 and 12), the output displays the corresponding month as a string.

If the input is invalid, display "Invalid month input".



Refer to the sample output for the formatting specifications.

Code constraints :
1 <= n <= 12

Sample test cases :
Input 1 :
6
Output 1 :
Month: JUNE

Input 2 :
13
Output 2 :
Invalid month input

Whitelist
Set 1:
enum Month
class Year
*/

#include <iostream>
using namespace std;

class Year {
    public:
        enum Month {
            JANUARY = 1,
            FEBRUARY,
            MARCH,
            APRIL,
            MAY,
            JUNE,
            JULY,
            AUGUST,
            SEPTEMBER,
            OCTOBER,
            NOVEMBER,
            DECEMBER
        };
};

int main() {
        int n;
            cin >> n;
            
            if (n >= Year::JANUARY && n <= Year::DECEMBER) {
                Year::Month month = static_cast<Year::Month>(n);
                switch (month) {
                    case Year::JANUARY: cout << "Month: JANUARY"; break;
                    case Year::FEBRUARY: cout << "Month: FEBRUARY"; break;
                    case Year::MARCH: cout << "Month: MARCH"; break;
                    case Year::APRIL: cout << "Month: APRIL"; break;
                    case Year::MAY: cout << "Month: MAY"; break;
                    case Year::JUNE: cout << "Month: JUNE"; break;
                    case Year::JULY: cout << "Month: JULY"; break;
                    case Year::AUGUST: cout << "Month: AUGUST"; break;
                    case Year::SEPTEMBER: cout << "Month: SEPTEMBER"; break;
                    case Year::OCTOBER: cout << "Month: OCTOBER"; break;
                    case Year::NOVEMBER: cout << "Month: NOVEMBER"; break;
                    case Year::DECEMBER: cout << "Month: DECEMBER"; break;
                    }
                } else {
            cout << "Invalid month input";
        }
                
    return 0;
}