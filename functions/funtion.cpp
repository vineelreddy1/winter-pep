#include<iostream>
using namespace std;

int add(int x, int y ){
    return x+y;
}

int add(int x, int y , int z){
    return x+y+z;
}


int main(){
    add(1,2);
    add(1,2,3);

    return 0;

}
