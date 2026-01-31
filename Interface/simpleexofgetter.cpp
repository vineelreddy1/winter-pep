#include<iostream>
using namespace std;


class Base{
    int id = 10;

    public:

    int getx(string role){
        if(role == "Admin"){
            return id;
        }
        else{
            cout << "Unauthorized";
            return -1;
        }
    }
};

class Derived : public Base{
    public:
    string role;
    public:
    Derived(string role){
        this->role = role;
    }

    string getrole() const{
        return role;
    }
};


    int main(){
        
        
        Derived d1("Admin");
        int a = d1.getx(d1.getrole());
        cout << a;




    }