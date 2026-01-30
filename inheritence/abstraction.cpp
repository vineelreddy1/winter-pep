


#include <iostream>
using namespace std;

class Entity{

    public:
    //pure virtual
    virtual void display() = 0;

};

class Player : public Entity{
    public:

    void display(){
        cout << "Hi i am a Player";
    }
};


int main(){


    Entity *entity_ptr = new Player();

    entity_ptr->display();
    

}