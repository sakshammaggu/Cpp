//matchstick game
#include<iostream>
using namespace std;
int main()
{
    int i, j, l;
    cout<<"THIS GAME IS PLAYED BETWEEN COMPUTER AND THE USER. INTIALLY THERE ARE TOTAL 21 MATCHSTICKS.";
    cout<<"\nthe computer asks the player to enter the number of match sticks. HE can choose 1, 2, 3 or 4 matchsticks.";
    while (0<=i<=21)
    {
        cout<<"\nenter number of matchsticks: ";
        cin>>j;
        cout<<"\nyou have chosen "<<j<<" matchsticks.";
        while ((j==1)||(j==2)||(j==3)||(j==4))
        {
            i=21-j;
            if ((i-j)==0)
            {
                cout<<"\nyou have lost the game. the computer wins.";
            }
        }
    }
    return 0;
}