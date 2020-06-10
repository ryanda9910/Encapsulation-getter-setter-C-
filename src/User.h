#ifndef __User
#define __User

#include <string>
using namespace std;

class User
{
private:
    string name;
    double attackPower;
    int level;
    int exp;

    //method and constructor
public:
    User(const char*name);
    void showDisplay();
    string getName();
    void addexperience(int expValue);
};
#endif