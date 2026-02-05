#include<iostream>

using namespace std;
class Box{
    public:
    int capacity = 10;

    Box operator+(const Box &other){
        Box temp;
        temp.capacity = this->capacity+other.capacity; 
        return temp;
    }

    Box& operator--(){
        this->capacity--;
        return *this;
    }
};

int main(){
    Box mybox;
    Box anotherbox;

    Box box3 = mybox.operator+(anotherbox);

    cout << box3.capacity << endl;
    --box3;
    cout << box3.capacity << endl;



    
}