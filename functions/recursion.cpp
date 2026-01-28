#include<iostream>
using namespace std;
// recursive function -> a afunction calling itself
void print(int n){
    if(n == 0)
    {
        return;
    }
    print(n - 1);
    cout << n<< endl;

}

int main(){
    print(5);
    return 0;
}