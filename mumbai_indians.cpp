#include "mumbai_indians.h"
#include<iostream>
#include<stdlib.h>

using namespace std;

void mumbai_indians::mi()
{
    system("cls");
    cout<<"                                     MUMBAI INDIANS\n\n\n\n";
    cout<<"Owner: Reliance Industries\n\n\nHome Ground: Wankhede Stadium, Mumbai\n\n\n";
    cout<<"1- Support Staff\n2- Players\n\nSelect Your Choice: ";
    cin>>cd;
    if (cd==1)
        support_staff();
    else
        player();
    system("cls");
}

void mumbai_indians::support_staff()
{
    cout<<"\n\n\nHead Coach: Mahela Jayawardene\n\nBatting Coach: Robin Singh\n\nBowling Coach: Shane Bond\n\nBowling Mentor: Lasith Malinga\n\nFielding Coach: James Pamment\n\nTeam Manager; Rahul Sanghavi\n\nStrength & Conditioning Coach: Paul Chapman\n\nPhysiotherapist: Nitin Patel\n\nData Analyst: CJM Dhananjai\n\nSports Massage Therapist: Amit Shah\n\nAssistant Physiotherapist:Shyam Sundar Jayapalan\n\nAssistant Strength & Conditioning Coach: Afzal Khan\n\n";
    system("pause");
}


void mumbai_indians::player()
{
    cout<<"1-Rohit Sharma (c)\n2-Kieron Pollard\n3-JP Duminy\n4-Saurabh Tiwary\n5-Suryakumar Yadav\n6-Krunal Pandya\n7-Hardik Pandya\n8-Aditya Tare\n9-Ishan Kishan\10-Ben Cutting\n11-Pat Cummins\n12-Jasprit Bumrah\n13-Pradeep Sangwan\n14-Rahul Chahar\n15-Akila Dananjaya\n16-Anukul Roy\n17-Even Lewis\n18-Jason Behrendroff\n19-MD Nidheesh\n20-Mayank Markande\n21-Mohsin Khan\n22-Mustafizur Rahman\n23-Sharad Lumba\n24-Siddhesh Lad\n25-Tajinder Singh\n\n";
    system("pause");

}
