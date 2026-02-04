#include<iostream>
using namespace std;

class A{
    public:
int add(int a , int b){
    return a+b;
}

int add(int a , int b, int c){
    return a+b+c;
}

};


int main(){
    A a1;
    cout << a1.add(1,2) << endl;
    cout << a1.add(2,3,4) << endl;

}