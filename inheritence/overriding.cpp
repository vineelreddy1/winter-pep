#include <iostream>
using namespace std;


class Entity {

    public:
    virtual void display()
    {
        cout<<"Entity :"<<endl;
    }

}; // => base 

class Player : public Entity{

    public:
    void display()
    {
        cout<<"old Player :"<<endl;
    }

}; // => derives calls 

class newPlayer : public Player{
    public:
    void display(){
        cout << "New player" << endl;
    }
};



int main() {
    
    Player player;
    Entity entity;

    Entity* entity_ptr = new Player();
    Player* player_ptr = new newPlayer();


    // entity.display();
    // player.display();  

    // entity_ptr->display(); // 
    player_ptr->display();





    return 0;
}