#include<iostream>
#include<stdlib.h>
#include"mumbai_indians.h"
#include "matches.h"
#include "delhi_daredevils.h"
#include "kolkata_knight_riders.h"
#include "royal_challangers_bangalore.h"
#include "kings_xi_punjab.h"
#include "chennai_super_kings.h"
#include "sunrisers_hyderabad.h"
#include "rajasthan_royals.h"


using namespace std;

int main()
{
    mumbai_indians p;
    matches q;
    delhi_daredevils r;
    royal_challangers_bangalore s;
    kolkata_knight_riders t;
    kings_xi_punjab u;
    chennai_super_kings v;
    sunrisers_hyderabad w;
    rajasthan_royals x;


    int ct,ch;
    while(1)
    {


        system("cls");
        cout<<"                                  ******IPL 2018******\n";
        cout<<"1-Matches\n2-Teams Participating\n3-Team Details\n4-Exit\n\nEnter Your Choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1: system("cls");
                    q.match();
                    system("pause");
                    break;

            case 2: system("cls");
                    cout<<"1- Mumbai Indians\n2- Delhi Daredevils\n3- Royal Challangers Bangalore\n4- Kolkata Knight Riders\n5- Kings XI punjab\n6- Chennai Super Kings\n7- Sunrisers Hyderabad\n8- Rajasthan Royals\n";
                    system("pause");
                    break;

            case 3: system("cls");
                    cout<<"1- Mumbai Indians\n2- Delhi Daredevils\n3- Royal Challangers Bangalore\n4- Kolkata Knight Riders\n5- Kings XI punjab\n6- Chennai Super Kings\n7- Sunrisers Hyderabad\n8- Rajasthan Royals\n\n\nSelect a Team: ";
                    cin>>ct;
                    switch(ct)
                    {
                        case 1: p.mi();
                                break;

                        case 2: r.dd();
                                break;

                        case 3: s.rcb();
                                break;

                        case 4: t.kkr();
                                break;

                        case 5: u.kxip();
                                break;

                        case 6: v.csk();
                                break;

                        case 7: w.srh();
                                break;

                        case 8: x.rr();
                                break;

                    }
                    break;

            case 4: exit(0);

        }


    }
    return 0;
}
