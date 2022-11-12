/*Create a C++ class for player objects with the following attributes: player no., name, number of matches 
and number of goals done in each match. The number of matches varies for each player. 
Write a parameterized constructor which initializes player no., name, number of subjects and creates an array 
for number of goals and number of matches dynamically*/
#include<iostream>
using namespace std;
class Player
{
    protected:
        int player_no, noOfmatches;
        char playerName[32];
        int *noOfgoal;
    public:
        Player()
        {
            cout<<"----------------------------------------------------------"<<endl;
            cout<<"Enter Player Number                     : ";
            cin>>player_no;
            cout<<"\nEnter Player Name                       : ";
            cin.ignore();
            cin.getline(playerName,32);
            cout<<"\nEnter Number of Matches                 : ";
            cin>>noOfmatches;
            noOfgoal = new int[noOfmatches];
            for(int i=0; i<noOfmatches; i++)
            {
                cout<<"Enter No. of Goal in '"<<i+1<<"' Match: ";
                cin>>noOfgoal[i];
            }
            cout<<"----------------------------------------------------------"<<endl;
        }
        void display()
        {
            cout<<"----------------------------------------------------------"<<endl;
            cout<<"Player Number                          : "<<player_no<<endl;
            cout<<"Player Name                            : "<<playerName<<endl;
            cout<<"Number of Matches                      : "<<noOfmatches<<endl;
            for(int i=0; i<noOfmatches; i++)
            {
                cout<<"No. of Goal in '"<<i+1<<"' Match is: "<<noOfgoal[i]<<endl;
            }
            cout<<"----------------------------------------------------------"<<endl;
        } 
};
int main()
{
    Player p1;
    p1.display();
    return 0;
}