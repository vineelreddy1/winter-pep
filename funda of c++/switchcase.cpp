#include<iostream>
using namespace std;

int main(){

    char choice;
    cout << "ENter your choice: ";
    cin >> choice;
    cout << "ENter A for user  dashboard";
    cout << "ENter B for admin dashboard";
    cout << "ENter C for exiting the program";

    switch (choice)
    {
    case 'A':
        cout << "you are at user dash";
        break;
    
    case 'B':
        cout << "you are at admin dash";
        break;
    
    case 'C':
        cout << "you are exiting dash";
        break;
    
    default:
    cout << "ENter correct value ";
        break;
    }

}
