#include <string>
#ifndef __Equalizer
#define __Equalizer
using std::string;
    class Equalizer
    {
        private:
            string Current;
        public:
            string getMode();
            string Mode[6]={"Normal","Jazz","Rock","Pop","Classic","Metal"};
            Equalizer(int);
            
            ~Equalizer();

    };
    Equalizer::Equalizer(int n){
        Current=Mode[n-1];
    }
    string Equalizer::getMode(){
        return Current;
    }
        
#endif
