#include<iostream>
using namespace std;

int main(){

    string input;

    getline(cin , input);

    int firstoccurance = input.find(' ');
    string firstword = firstoccurance != string::npos ? input.substr(0, firstoccurance) :input ;

    cout<<firstword<<endl;
    return 0;

}