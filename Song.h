#ifndef __Song
#define __Song
#include <string>
using std::string;
namespace Sg
{
    class Song
    {
        private:
            std::string Name;
         public:
            
            Song(string);
            ~Song();
            string getName(); 
    };
    Song::Song(string s)
    {
        Name=s;
    }
    string Song::getName()
    {
        return Name;
    }
}
#endif
