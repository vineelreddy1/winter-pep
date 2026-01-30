#include<iostream>
using namespace std;



class A{
    public:
    void print(){
        cout << "A";
    }
};

class B : public virtual A{
    public:
    
    
};

class C : public virtual A{
    public:
    


};

class D :  public B, public C{
    public:
    
};


int main(){

    D sush;
    sush.print();
    C vin;
    vin.print();



}