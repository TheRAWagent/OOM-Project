#include <iostream>
#include <string>
#include "Player.h"
#include "Song.h"
#include "Equalizer.h"
using std::cout;
using std::cin;
using Sg::Song;
using std::string;
int main()
{
    char t,n,S[100];
    int Mo;
    cout << "Welcome\nPlease Press 1 to proceed : ";
    cin >> t;
    if(t == '1')
    {
        cout << "Enter the name of the Song to be played :  ";
        scanf("%s",&S);
        Song sng;
        sng.Name=S;
        cout << "Press 1 for Normal\nPress 2 for Jazz\nPress 3 for Rock\nPress 4 for Pop\nPress 5 for Classic\n";
        Equalizer Eq;
        cin >> Mo;
        Eq.Check(Mo);
        Player Pl = Player(sng.Name,Eq.Current);
        cin >> n;
        if(t=='0')
        {
            Pl.~Player();
        }
    }
}