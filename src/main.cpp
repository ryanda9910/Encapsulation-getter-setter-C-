#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    string name;

    //constructor
    Player(const char *name)
    {
        cout <<Player::name << " created  " << endl;
        Player::name = name;
    }

    //destructor
    ~Player()
    {
        cout<<Player::name << " deleted " << endl;
    }
};

    void createPlayerStack(){
        Player stackPlayer = Player("Stack ");
    }

    void createPlayerHeap(){
        Player* heapPlayer =  new Player("Heap");
        delete heapPlayer;

    }
    void createPlayerStackPointer(Player* &playerPointer){
        Player stackPlayer = Player("Stack");
        playerPointer = &stackPlayer;
    }
    void createPlayerHeapPointer(Player* &playerPointer){
        Player *heapPlayer  = new Player("heap");
        playerPointer = heapPlayer;
        // delete heapPlayer;
 
    }

    Player createStackPlayer(){
        Player stackPlayer =  Player("Stack");
        return stackPlayer;    
    }

    Player* createHeapPlayer(){
        Player* heapPlayer = new Player("Heap");
        return heapPlayer;    
    }

int main(int argc, char const *argv[])
{
    createPlayerStack();
    createPlayerHeap();
    //Simulated Memory leak
    cout<<"\nMemoryleak"<<endl;

    //PointerStackOne
    Player *playerPointerone;
    createPlayerStackPointer(playerPointerone);

    //PointerHeadTwo
    Player *playerPointertwoHeap;
    createPlayerHeapPointer(playerPointertwoHeap);
    cout<<playerPointertwoHeap->name<<endl;
    playerPointertwoHeap->name="rubish";
    cout<<playerPointertwoHeap->name<<endl;
    playerPointertwoHeap->name="PLAYER";
    delete playerPointertwoHeap;

    cout<<"\n Return object"<<endl;
    Player playerReturnStack = createStackPlayer();
    cout<<playerReturnStack.name<<endl;


    Player* playerReturnHeap = createHeapPlayer();
    playerReturnHeap->name="ReturnHeap";
    cout<<playerReturnHeap->name<<endl;
    delete playerReturnHeap;


    return 0;
}

