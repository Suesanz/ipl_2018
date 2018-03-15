#include "royal_challangers_bangalore.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

void royal_challangers_bangalore::rcb()
{
    system("cls");
    cout<<"                                     ROYAL CHALLANGERS BANGALORE\n\n\n\n";
    cout<<"Owner: United Spirits Limited\n\n\nHome Ground: M.Chinnaswamy Stadium, Bangalore\n\n\n";
    cout<<"1- Support Staff \n2- Players\n\nSelect Your Choice: ";
    cin>>cd;
    if (cd==1)
        support_staff();
    else
        player();
    system("cls");
}

void royal_challangers_bangalore::support_staff()
{
    system ("cls");
    cout<<"\n\n\nHead Coach: Daniel Vettori\n\nBowling Coach: Ashish Nehra\n\nBowling Talent Development and Analytics: Andrew McDonald\n\nBatting Coach: Gary Kirsten\n\nBatting Talent Development and Fielding coach: Trent Woodhill\n\nTeam and Cricket Operations Manager: Avinash Vaidya\n\nPhysiotherapist: Evan Speechly\n\nAcupressure Masseur: Ramesh Mane\n\nMassage Therapist: Arun Kanade\n\nLogistics Manager: S Rajeswar\n\n";
    system("pause");
}

void royal_challangers_bangalore::player()
{
    system ("cls");
    cout<<"1-Virat Kohli (c)\n2-Moeen Ali\n3-Quinton De Kock\n4-Umesh Yadav\n5-Manan Vohra\n6-Kulwant Khejroliya\n7-Navdeep Saini\n8-Murugan Ashwin\n9-Washington Sundar\10-Nathan Coulter Nile\n11-Mohammed Siraj\n12-Anirudha Joshi\n13-Pawan Negi\n14-Parthiv Patel\n15-Aniket Choudhary\n16-Tim Southee\n17-Brendon McCullum\n18-Pavan Deshpande\n19-Chris Woakes\n20-Colin de Grandhomme\n21-AB de Villiers\n22-Yuzvendra Chahal\n23-Mandeep Singh\n24-Sarfaraz Khan\n\n";
    system("pause");
}
