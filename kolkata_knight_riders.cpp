#include "kolkata_knight_riders.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

void kolkata_knight_riders::kkr()
{
    system("cls");
    cout<<"                                     KOLKATA KNIGHT RIDERS\n\n\n\n";
    cout<<"Owner: Shahrukh Khan\n       Juhi Chawla\n       Jay Mehta\n       Red Chillies Entertainment\n\n\nHome Ground: Eden Gardens, Kolkata\n\n\n";
    cout<<"1- Support Staff \n2- Players\n\nSelect Your Choice: ";
    cin>>cd;
    if (cd==1)
        support_staff();
    else
        player();
    system("cls");
}

void kolkata_knight_riders::support_staff()
{
    system ("cls");
    cout<<"\n\n\nHead Coach: Jacques Kallis\n\nAssistant Coach: Simon Katich\n\n\n\nWicket Keeping Consultant: Mark Boucher\n\nPhysiotherapist: Andrew Leipus\n\nTeam Trainer: Adrian Le Roux\n\nData & Video Analyst: AR Srikkanth\n\n";
    system("pause");
}

void kolkata_knight_riders::player()
{
    system ("cls");
    cout<<"1-Dinesh Karthik (c)\n2-Robin Uthappa\n3-Chris Lynn\n4-Nitish Rana\n5-Shubman Gill\n6-Ishank Jaggi\n7-Apoorv Wankhade\n8-Rinku Singh\n9-Andre Russell\10-Sunil Narine\n11-Shivam Mavi\n12-Cameron Delport\n13-Mitchell Starc\n14-Mitchell Johnson\n15-Piyush Chawla\n16-Kuldeep Yadav\n17-Kamlesh Nagarkoti\n18-Vinay Kumar\n19-Javon Searles\n\n";
    system("pause");
}
