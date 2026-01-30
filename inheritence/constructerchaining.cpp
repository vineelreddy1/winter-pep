#include<iostream>
using namespace std;


class Team{
    protected:
    int x,y;
    string name1;

    public:
    Team(int x , int y){
        cout << "Hello i am entity" << endl;
        this->x = x;
        this->y = y;
    }
};

class Player : public Team{

    private:

    string name;

    public:
    Player(int x, int y , string name) : Team(x,y) , name(name){};

    void print(){
        cout << x << y << endl;
        cout << "Name: " << endl;
        cout << name << endl;
    }

};

int main(){

    Player p(7,8,"Vineel");
    p.print();

}