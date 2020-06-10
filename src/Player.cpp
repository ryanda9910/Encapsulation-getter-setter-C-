#include "Player.h"
#include<iostream>
#include<string>
using namespace std;
//declaremethod
Player::Player(const char* name){
    this->name=name;
} 

void Player::display(){
    cout<< "My name is "<<this->name<<endl;
}

string Player::getName(){
    return this->name;
}
void Player::setName(const char * name){
    this->name=name;
}

