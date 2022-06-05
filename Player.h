#ifndef __Player
#define __Player
#include "Song.h"
#include "Equalizer.h"
using std::string;
    class Player : public Equalizer, public Sg::Song
    {
    public:
        Player();
        ~Player();
        void Play(Equalizer,Sg::Song);

    };
    Player::Player(){
        std::cout << "Player Ready\n";
    } 
    Player::~Player()
    {
        std::cout << "Music Stopped";
    }
    void Player::Play(Equalizer E,Sg::Song S)
    {
        std::cout << "Now Playing " << S.getName() << " in " << E.getMode() << " mode\nPress 0 to Stop\nPress 9 to exit";
    }

#endif
