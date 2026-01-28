#include<iostream>
using namespace std;
int main(){
    const float pi = 3.14;
    int r ;
    cout << "Enter the radius: " << endl;
    cin >> r;

    float area = pi * r * r;

    cout << "The area of circle with given radius is: "<< area;


}