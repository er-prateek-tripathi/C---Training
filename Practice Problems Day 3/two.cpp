/*
Question 2
An election is contested by five candidates. The candidates are numbered 1 to 5 and the voting is done by marking 
the candidate number on the ballot paper. Write a program to read the ballots and count the votes cast for each 
candidate using an array variable count. In case, a number read is outside the range 1 to 5, 
the ballot should be considered as a 'spoilt ballot', and the program should also count the number of spoilt ballots.
*/

#include<iostream>
using namespace std;
main()
{
    system("cls");
    int a[5]={0,0,0,0,0};
    int n,vote,sb=0,i;
    cout<<"The candidates contesting the election and their Ballot Number :\nCandidate List \t Ballot Number "
            "\nCandidate - 1 \t\t 1 \nCandidate - 2 \t\t 2 \nCandidate - 3 \t\t 3 \nCandidate - 4 \t\t 4 \nCandidate - 5 \t\t 5";    
    cout<<"\nEnter the number of votes : ";
    cin>>n;
    for(i=0;i<n;i++)
        {
        cout<<"\nEnter your vote : ";
        cin>>vote;
        switch(vote)
            {
                case 1:     cout<<"\nVote Recorded, Bring in the next Voter.";
                            a[0]++;
                            break;
                
                case 2:     cout<<"\nVote Recorded, Bring in the next Voter.";
                            a[1]++;
                            break;
                
                case 3:     cout<<"\nVote Recorded, Bring in the next Voter.";
                            a[2]++;
                            break;
                
                case 4:     cout<<"\nVote Recorded, Bring in the next Voter.";
                            a[3]++;
                            break;
                
                case 5:     cout<<"\nVote Recorded, Bring in the next Voter.";
                            a[4]++;
                            break;
                
                default:    cout<<"Vote Recorded, Bring in the next Voter.";
                            sb++;
            }
        }
    cout<<"\n\nResults of Election are as follows\n";
    for(i=0;i<5;i++)
    cout<<"\nCandidate -  "<<i+1<<" : "<<a[i];
    cout<<"\nSpoiled Ballots : "<<sb; 
}