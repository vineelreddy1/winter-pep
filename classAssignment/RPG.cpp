#include<iostream>
using namespace std;

class Hero{
    protected:
    string name;
    int health;

    public:
    Hero(string name,int health){
        this->name = name;
        this->health = health;

        cout << "Base Hero " << name << " has entered the world.\n";
    }

    void takeDamage(int amount){
        health = health - amount;
    }
    
    void display(){
        cout << name << endl;
        cout << health << endl;
    }



};
/*
Create a class Warrior that inherits from Hero.
● Data Members (Private):
○ int armor: An extra layer of protection.
● Constructor:
○ Takes name, health, and armor.
○ Crucial: You must pass the name and health to the Hero constructor using an Initialization List.
○ Should print: "Warrior [Name] is ready for battle!"
● Method Overriding:
○ Override takeDamage(int amount): The Warrior's armor reduces damage.
○ Logic: actualDamage = amount - (armor / 2).
*/

class Warrior : virtual public Hero{

    private:
    int armor;
    //Player(int x, int y , string name) : Team(x,y) , name(name){};
    public:
    Warrior(string name,int health,int armor): Hero(name,health) , armor(armor){
        cout << "Warrior " << name << " is Ready for the battle!\n";
    }

    void takeDamage(int amount){
        int actualDamage = amount - (armor/2);
        cout << "THe actualDamge taken by the warrior is : " << actualDamage << endl;
        if(actualDamage < 0){
            actualDamage = 0 ;
            cout<<actualDamage;
        }else{
        health-=actualDamage;
        cout << "Health after taking damage : " << health << endl;
        } 
    }

};

class Mage : public Hero{
    private:
    int mana;
    public:
    Mage(string name , int health, int mana) : Hero(name,health) , mana(mana){
        cout << "Mage : " << name << " Has entered the battle" << endl;
    }


    void castSpell(){
        if(mana >= 10){
        mana-=10;
        cout << "Casting Fireball " << endl;
        }
        else{
            cout << "Not Enough mana to cast Fireball" << endl;
        }


    }

};

class WarriorMage : public Warrior, public Mage{
    public:
    WarriorMage(string name, int health, int armor , int mana) : Hero(name,health) , Warrior(name,health,armor) , Mage(name , health, mana){
        cout << "Worrior Mage " << name << "is ready for Battle and Cast";
    }

};



int main(){

    // Hero h1("Vineel",100);
    // h1.takeDamage(50);
    // h1.display();

    Warrior THor("Thor",100,20);
    Mage Loki("Loki",100,9);

    THor.takeDamage(20);
    THor.display();
    Loki.castSpell();
    Loki.display();






}