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
    char t,n;
    string S;
    int Mo;
    cout << "Welcome\nPlease Press 1 to proceed : ";
    cin >> t;
    while(t=='1')
    {
        cout << "Enter the name of the Song to be played :  ";
        cin >> S;
        Song sng = Song(S);
        cout << "Press 1 for Normal\nPress 2 for Jazz\nPress 3 for Rock\nPress 4 for Pop\nPress 5 for Classic\n";
        cin >> Mo;
        Equalizer Eq = Equalizer(Mo);
        Player Pl;
        Pl.Play(Eq,sng);
        cin >> t;
        if(t=='0')
        {
            Pl.~Player();
            t='1';
        }
        else if(t=='9')
        {
            cout << "Hope You had a good experience\n Thank You"; 
            break;
        }
    }
}