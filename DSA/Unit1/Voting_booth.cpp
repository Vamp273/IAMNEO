/*
Problem Statement
In a voting booth, voters cast their votes by entering the ID number of their preferred candidate. Your task is to develop a 
vote-counting system that identifies the majority candidate, i.e., the candidate who receives more than half of the total votes.

You are provided with an array of integers representing the ID numbers of the candidates in the order they were voted for. Your system 
needs to determine if a majority candidate exists and, if so, declare them as the winner.

Note: This kind of question will be helpful in clearing TCS recruitment.

Input format :
The first line contains a single integer, N, representing the number of votes cast.

The second line contains N space-separated integers, representing the ID numbers of the candidates in the order they were voted for.

Output format :
The output prints the majority candidate ID.

If no majority candidate exists, output "No majority candidate found"



Refer to the sample output for formatting specifications.

Sample test cases :
Input 1 :
7
4 4 2 4 4 3 4
Output 1 :
The majority candidate is ID 4
Input 2 :
6
1 2 3 4 5 6
Output 2 :
No majority candidate found
*/

#include <iostream>
#include <vector>
#include <map>

int main()
{
        int n;
            std::cin >> n;
            
                std::vector<int> votes(n);
                    for (int i = 0; i < n; i++)
                        {
                                    std::cin >> votes[i];
                        }
                        
                            std::map<int, int> voteCount;
                                for (int candidateID : votes)
                                    {
                                                voteCount[candidateID]++;
                                    }
                                    
                                        int majorityThreshold = n / 2 + 1;
                                            int majorityCandidate = -1;
                                            
                                                for (const auto &entry : voteCount)
                                                    {
                                                                if (entry.second >= majorityThreshold)
                                                                        {
                                                                                        majorityCandidate = entry.first;
                                                                                                    break;
                                                                        }
                                                    }
                                                    
                                                        if (majorityCandidate != -1)
                                                            {
                                                                        std::cout << "The majority candidate is ID " << majorityCandidate << std::endl;
                                                            }
                                                                else
                                                                    {
                                                                                std::cout << "No majority candidate found" << std::endl;
                                                                    }
return 0;
}