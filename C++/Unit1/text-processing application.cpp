/*
Problem Statement

A text-processing application needs a module to manipulate strings. The module should provide functionalities to set a string, 
count the number of characters, find the length of the string, convert the string to uppercase, convert the string to lowercase,
 and retrieve the string.

You are tasked with implementing a StringManipulator class that performs various operations on a given string. The class 
provides methods to count the number of characters in the string, find the length of the string, convert the string to uppercase,
 and convert the string to lowercase.

Ensure that the class correctly manipulates the string and provides the expected results for each operation.

Note: Use the Non-inline member function.

Note: This is a sample question asked in a mPhasis interview.

Input format :
The input consists of a string.

Output format :
The first line of the output displays the number of characters in the string.

The second line of the output displays the length of the string.

The third line of the output displays the uppercase version of the string.

The last line of the output displays the lowercase version of the string.



Refer to the sample output for formatting specifications.

Code constraints :
The input string can contain alphanumeric characters, symbols, spaces, and punctuation marks.

The maximum length of the input string is 1000 characters.

Sample test cases :
Input 1 :
Hello World
Output 1 :
Number of characters: 11
Length of the string: 11
Uppercase string: HELLO WORLD
Lowercase string: hello world

Input 2 :
abcdefg
Output 2 :
Number of characters: 7
Length of the string: 7
Uppercase string: ABCDEFG
Lowercase string: abcdefg

Whitelist
Set 1:
void StringManipulator::setString(const string& s)
int StringManipulator::countCharacters()
int StringManipulator::findLength()
void StringManipulator::convertToUppercase()
void StringManipulator::convertToLowercase()
*/

// You are using GCC
#include<iostream>
#include<string>
#include<cctype>

class StringManipulator
{
    private:
        std::string inputString;
        
    public:
        void setString(const std::string& s);
        
        int countCharacters();
        
        int findLength();
        
        void convertToUppercase();
        
        void convertToLowercase();
        
        std::string getString();
};

void StringManipulator::setString(const std::string& s)
{
    inputString = s;
}

int StringManipulator::countCharacters()
{
    return inputString.size();
}

int StringManipulator::findLength()
{
    return inputString.length();
}

void StringManipulator::convertToUppercase()
{
    for (char& c : inputString)
    {
        c = std::toupper(c);
    }
}

void StringManipulator :: convertToLowercase()
{
    for(char& c : inputString)
    {
        c = std::tolower(c);
    }
}

std::string StringManipulator::getString()
{
    return inputString;
}

int main()
{
    StringManipulator manipulator;
    std::string input;
    getline(std::cin, input);
    
    manipulator.setString(input);
    
    std::cout << "Number of characters: " << manipulator.countCharacters() << std::endl;
    std::cout << "Length of the String: " << manipulator.findLength() << std::endl;
    
    manipulator.convertToUppercase();
    std::cout << "Uppercase string: " << manipulator.getString() << std::endl;
    
    manipulator.convertToLowercase();
    std::cout << "Lowercase string: " << manipulator.getString() << std::endl;
    
    return 0;
}