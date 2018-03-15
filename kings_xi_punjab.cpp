#include "kings_xi_punjab.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

void kings_xi_punjab::kxip()
{
    system("cls");
    cout<<"                                     KINGS XI PUNJAB\n\n\n\n";
    cout<<"Owner: GMR Group\n\n\n";
    cout<<"1- Support Staff \n2- Players\n\nSelect Your Choice: ";
    cin>>cd;
    if (cd==1)
        support_staff();
    else
        player();
    system("cls");
}

void kings_xi_punjab::support_staff()
{
    system ("cls");
    cout<<"\n\n\nCoach: Brad Hodge\n\n";
    system("pause");
}

void kings_xi_punjab::player()
{
    system ("cls");
    cout<<"1-Ravichandran Ashwin (c)\n2-Aaron Finch\n3-David Miller\n4-Karun Nair\n5-Manoj Tiwary\n6-\n7-Mayank Agarwal\n8-Andrew Tye\n9-Ankit Rajpoot\10-Barinder Sran\n11-Mayank Dagar\n12-Mohit Sharma\n13-Mujeeb Ur Rahman\n14-Axar Patel\n15-Ben Dwarshuis\n16-Chris Gayle\n17-Manzoor Dar\n18-Marcus Stoinis\n19-Pardeep Sahu\n20-Yuvraj Singh\n21-Akshdeep Nath\n22-Lokesh Rahul\n\n";
    system("pause");
}

