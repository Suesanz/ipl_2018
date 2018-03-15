#include "delhi_daredevils.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

void delhi_daredevils::dd()
{
    system("cls");
    cout<<"                                     DELHI DAREDEVILS\n\n\n\n";
    cout<<"Owner: GMR Group\n\n\nHome Ground: Feroz Shah Kotla Stadium, New Delhi";
    cout<<"1- Support Staff \n2- Players\n\nSelect Your Choice: ";
    cin>>cd;
    if (cd==1)
        support_staff();
    else
        player();
    system("cls");
}

void delhi_daredevils::support_staff()
{
    system ("cls");
    cout<<"\n\n\nHead Coach: Ricky Ponting\n\nAssistant Coach: Pravin Amre\n\nAssistant Coach: Sriram Sreedharan\n\nTeam Manager: Sunil Valson\n\nHead Physiotherapist: Paul Close\n\nAssistant Physiotherapist: Vaibhav Daga\n\nTeam Trainer: Rajnikanth S\n\n";
    system("pause");
}

void delhi_daredevils::player()
{
    system ("cls");
    cout<<"1-Gautam Gambhir (c)\n2-Mohammed Shami\n3-Shahbaz Nadeem\n4-Amit Mishra\n5-Shreyas Iyer\n6-Chris Morris\n7-Rishabh Pant\n8-Kagiso Rabada\n9-Glenn Maxwell\10-Jason Roy\n11-Colin Munro\n12-Vijay Shankar\n13-Rahul Tewatia\n14-Prithwi Shaw\n15-Harshal Patel\n16-Trent Boult\n17-Daniel Christian\n18-Naman Ojha\n19-Gurkeerat Singh Mann\n20-Avesh Khan\n21-Abhishek Sharma\n22-Jayant Yadav\n23-Manoj Kalra\n24-Sandeep Lamichhane\n25-Sayan Ghosh\n\n";
    system("pause");
}
