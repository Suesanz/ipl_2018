#include "sunrisers_hyderabad.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

void sunrisers_hyderabad::srh()
{
    system("cls");
    cout<<"                                     SUNRISERS HYDERABAD\n\n\n\n";
    cout<<"Owner: Kalanithi Maran (Sun TV Network)\n\n\nHome Ground:  Rajiv Gandhi International Cricket Stadium, Hyderabad\n\n\n";
    cout<<"1- Support Staff \n2- Players\n\nSelect Your Choice: ";
    cin>>cd;
    if (cd==1)
        support_staff();
    else
        player();
    system("cls");
}

void sunrisers_hyderabad::support_staff()
{
    system ("cls");
    cout<<"\n\n\nHead Coach: Tom Moody\n\nAssistant Coach: Simon Helmot\n\nBowling Coach: Muttiah Muralitharan\n\nMentor: VVS Laxman\n\nPhysiotherapist: Theo Kapakoulakis\n\n";
    system("pause");
}

void sunrisers_hyderabad::player()
{
    system ("cls");
    cout<<"1-David Warner (c)\n2-Shikhar Dhawan\n3-Manish Pandey\n4-Kane Williamson\n5-Ricky Bhui\n6-Sachin Baby\n7-Tanmay Agarwal\n8-Bhuvneshwar Kumar\n9-Rashid Khan\10-Basil Thampi\n11-Siddarth Kaul\n12-Khaleel Ahmed\n13-T Natarajan\n14-Sandeep Sharma\n15-Billy Stanlake\n16-Shakib Al Hasan\n17-Deepak Hooda\n18-Carlos Brathwaite\n19-Yusuf Pathan\n20-Mohammad Nabi\n21-Chris Jordan\n22-Bipul Sharma\n23-Mehdi Hasan\n\n";
    system("pause");
}

