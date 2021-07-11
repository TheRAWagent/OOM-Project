#ifndef __Player
#define __Player
#include "Song.h"
#include "Equalizer.h"
using std::string;
    class Player : public Equalizer, public Sg::Song
    {
    private:
        /* data */
    public:
        Player(string,string);
        ~Player();
    };
    
    Player::Player(string S,string M)    {
       std::cout << "Now Playing " << S << " in " << M << " mode\nPress 0 to stop\n";
    }    
    Player::~Player()
    {
        std::cout << "Music Stopped";
    }
#endif