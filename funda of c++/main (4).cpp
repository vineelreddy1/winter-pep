/*#include<iostream>
using namespace std;

 int add(int x, int y){
     int sum = x+y;
     cout << sum << endl;
     return sum;
 }
 
 void divide(int &x , int &y){
     
     cout << x/y << endl;
 }
 
 
 
int main(){
    
    add(4,5);
    
    int a = 8 , b =2;
    divide(a,b);
}



*/

#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapByValue(x, y);
    cout << "x = " << x << ", y = " << y;
    return 0;
}

#include <iostream>
using namespace std;

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapByReference(x, y);
    cout << "x = " << x << ", y = " << y;
    return 0;
}

