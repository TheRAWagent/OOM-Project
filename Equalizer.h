#include <string>
#ifndef __Equalizer
#define __Equalizer
using std::string;
    class Equalizer
    {
        private:
        public:
            string Current;
            void Check(int);
            

    };
    void Equalizer::Check(int n){
        switch (n)
        {
        case 1:
            Current = "Normal";
            break;
        case 2:
            Current = "Jazz";
            break;
        case 3:
            Current = "Rock";
            break;
        case 4:
            Current = "Pop";
            break;
        case 5:
            Current = "Classic";
            break;
        default:
            Current = "";
            break;
        } 
        }
        
#endif