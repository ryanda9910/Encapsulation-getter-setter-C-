//prototype
#include<iostream>
#include<string>

//eksternal file 
#include "Player.h"

using namespace std;


int main(int argc, char const *argv[])
{
    Player* player = new Player("User");
    player->display();
    cout<<" get name: "<<player->getName()<<endl;
    cout << "change name "<<endl;
    player->setName("Ryan");
    player->display();

    return 0;
}




