/*An election is hosted by 5 candidates numbered from 1 to 5... Write a Program to count the votes
cast for each candidate using an array... If entered other numbers consider them as 'spoilt ballot'
and count the number of spoilt ballots as well...*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    int arr[50];     // Creating an array of 50 votes
    int count[5] = {0, 0, 0, 0, 0};  // Initialising counting ballot to zero for every candidate
    for(int i = 0; i < 50; i++)
    {
        arr[i] = rand()%5;  // Randomly distributing votes
    }
    int spoilt = 0;    // Spoilt ballot set to 50
    for(int i = 0; i < 50; i++)
    {
        if(arr[i] == 0)           // If else condition block
            count[0] = count[0] + 1;
        if(arr[i] == 1)
            count[1] = count[1] + 1;
        if(arr[i] == 2)
            count[2] = count[2] + 1;
        if(arr[i] == 3)
            count[3] = count[3] + 1;
        if(arr[i] == 4)
            count[4] = count[4] + 1;
        else if(arr[i] == 5)
            spoilt++;
    }
    for(int i = 0; i < 5; i++)   // Displaying votes
        cout << "The votes of " << i+1 << " Candidate are :" << count[i] << endl;
    cout << "The number of spoilt votes are : " << spoilt << endl;
    return 0;  // End of the program
}