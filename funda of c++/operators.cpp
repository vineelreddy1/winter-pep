//arthemtic operators 

#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout << " Enter the values of x , y : "<< endl;
    cin >> x >> y;
    char ch ;
    cout << "Enter the operation: " << endl;
    cin >> ch;

    if(ch == 'a'){
    cout <<"Addition : "<<  x + y << endl;
    }
    else if(ch == 's'){
        cout << "Sub: " <<  x-y << endl;
    }
    else if(ch == 'm'){
        cout << "Mul: "<<  x*y << endl;
    }
    
}