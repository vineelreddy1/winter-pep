#include<iostream>
using namespace std;

class A{
    
    int marks;


    public:

    void setmarks (int m){
        marks = m;
    }


    int getMarks(){
        return marks;
    }

};

int main(){

    A a2;
    a2.setmarks(100);
    cout << a2.getMarks();

}