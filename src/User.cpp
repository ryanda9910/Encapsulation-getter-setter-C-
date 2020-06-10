#include <iostream>
#include <string>
#include "User.h"
using namespace std;

User::User(const char *name)
{
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->attackPower = 100;
}
string User::getName()
{
    return this->name;
}

void User:: addexperience(int expValue)
{
    int maxExp = 100;
    cout << "Receive exp = "<<expValue << endl;
    this->exp += expValue;
    if (this->exp >= maxExp){
        this->level++;
        this->attackPower += 100;
        cout << "LEVEL UP" << endl;
    }
}

void User::showDisplay()
{
    cout << "Name " << name << endl;
    cout << "Level " << level << endl;
    cout << "Attack " << attackPower << endl;
    cout << "Exp " <<exp<< endl;
}

