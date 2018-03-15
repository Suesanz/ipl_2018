#include "chennai_super_kings.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

void chennai_super_kings::csk()
{
    system("cls");
    cout<<"                                     CHENNAI SUPER KINGS\n\n\n\n";
    cout<<"Owner: India Cements\n\n\nHome Ground:  M. A. Chidambaram Stadium, Chennai\n\n\n";
    cout<<"1- Support Staff \n2- Players\n\nSelect Your Choice: ";
    cin>>cd;
    if (cd==1)
        support_staff();
    else
        player();
    system("cls");
}

void chennai_super_kings::support_staff()
{
    system ("cls");
    cout<<"\n\n\nHead Coach: S Fleming\n\nBatting Coach: M Hussey\n\nBowling Coach: L Balaji\n\nBowling Consultant: E Simons\n\nHead Physiotherapist: T Sisek\n\nTeam Trainer: G King\n\nTeam Manager: Russell R\n\nPerformance Analyst: L Narayanan\n\nTeam Doctor: Dr. Madhu\n\nLogistics Manager: Sanjay\n\n";
    system("pause");
}

void chennai_super_kings::player()
{
    system ("cls");
    cout<<"1-MS Dhoni (c)\n2-Suresh Raina\n3-Faf DU Plessis\n4-Murali Vijay\n5-\n6-Shane Watson\n7-Mark Wood\n8-Shardul Thakur\n9-Dhruv Shorey\10-Kanishk Seth\n11-Ambati Rayudu\n12-Mitchell Santner\n13-Lungi Ngidi\n14-Monu Kumar\n15-Kshitiz Sharma\n16-Kedar Jadhav\n17-Narayan Jagadessan\n18-Imran Tahir\n19-Ravindra Jadeja\n20-Harbhajan Singh\n21-Deepak Chahar\n22-Dwyane Bravo\n23-Chaitnya Bishnoi\n24-Km Asif\n25-Sam Billings\n\n";
    system("pause");
}
