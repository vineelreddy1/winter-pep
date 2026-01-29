#include<iostream>
using namespace std;
class Parent{
    private:
    int x,y;
    protected:
    int z = 100;

    public:

    void print(){
        cout << x << " " <<  y << endl;
        cout << z  << "\n";
    }
};

class Child : public Parent{
    public:
    void printz(){
        cout << z;

    }

};

int main(){
    
    Parent p1;
    
    p1.print();
    
    Child c;
    c.printz();


}