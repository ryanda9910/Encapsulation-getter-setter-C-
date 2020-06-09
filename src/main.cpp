#include <iostream>
#include <string>

using namespace std;

class Constructor
{
public:
    string data;

    Constructor(string data)
    {
        Constructor::data = data;
    }
       void showConstructor(){
        cout<<data<<endl;
    }
};

class NoConstructor
{
public:
    string data;

    void showNoConstructor(){
        cout<<data<<endl;
    }

};


int main(int argc, char const *argv[])
{
    //NoCostructor 
    NoConstructor objectone;
    objectone.data="no constructor";
    objectone.showNoConstructor();

    //WithConstructor
    Constructor objecttwo = Constructor("Constructor");
    objecttwo.showConstructor();

    //implicitWithConstructor
    Constructor objectthree("ImplicitConstuctor");
    objectthree.showConstructor();

    //HeapWithConstructor 
    Constructor* objectfour = new Constructor("Heap Memory in Constructor");
    (*objectfour).showConstructor();
    objectfour->showConstructor();
    string data = objectfour->data;
    cout<<data<<endl;
 
    return 0;
}
