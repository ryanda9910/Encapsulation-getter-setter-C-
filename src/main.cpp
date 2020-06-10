#include <iostream>
#include <string>
#include "User.h"

using namespace std;

int main(int argc, char const *argv[])
{
    User user =  User("Ryan");
    user.showDisplay();

    //implemented getter
    cout << user.getName()<<endl;

    cout<<"Match"<<endl;
    user.addexperience(25); // setter
    user.showDisplay();
    user.addexperience(50);
    user.showDisplay();
    user.addexperience(10);
    user.showDisplay();
    user.addexperience(25);
    user.showDisplay();

    return 0;
}
