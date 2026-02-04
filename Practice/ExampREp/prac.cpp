#include<iostream>

using std::cout;


namespace math {
    int add(int a , int b){
        return a+b;
    }
}

int main(){
    cout << math::add(2,3);
}
