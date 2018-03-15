#include "rajasthan_royals.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

void rajasthan_royals::rr()
{
    system("cls");
    cout<<"                                     RAJASTHAN ROYALS\n\n\n\n";
    cout<<"Owner: Manoj Badale\n       Lachlan Murdoch\n\n\nHome Ground:  Sawai Mansingh Stadium, Jaipur\n\n\n";
    cout<<"1- Support Staff \n2- Players\n\nSelect Your Choice: ";
    cin>>cd;
    if (cd==1)
        support_staff();
    else
        player();
    system("cls");
}

void rajasthan_royals::support_staff()
{
    system ("cls");
    cout<<"\n\n\nHead Coach: Paddy Upton\n\nMentor: Shane Warne\n\nBatting Coach: Amol Muzumdar\n\nBowling Coach: Sairaj Bahutule\n\n";
    system("pause");
}

void rajasthan_royals::player()
{
    system ("cls");
    cout<<"1-Steve Smith (c)\n2-Ajinkya Rahane\n3-Ben Stokes\n4-Stuart Binny\n5-Sanju Samson\n6-Jos Buttler\n7-Rahul Tripathi\n8-D'Arcy Short\n9-Jofra Archer\10-Krishnappa Gowtham\n11-Dhawal Kulkarni\n12-Jaydev Unadkat\n13-Ankit Sharma\n14-Anureet Singh\n15-Zahir Khan\n16-Shreyas Gopal\n17-Sudhesan Midhun\n18-Prashant Chopra\n19-Ben Laughlin\n20-Mahipal Lomror\n21-Jatin Saxena\n22-Aryaman Vikram Birla\n23-Dushmantha Chameera\n\n";
    system("pause");
}
