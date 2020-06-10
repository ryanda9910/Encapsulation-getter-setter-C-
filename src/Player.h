#ifndef __PLAYER
#define __PLAYER
#include<string>

using namespace std;
class Player{
    public:
        string name; 

        //constructor
        Player(const char *);//prototype
        void display();
        string getName();
        void setName(const char*);

};

#endif