#include<iostream>
using namespace std;
int sumofDig(int n , int sum){
    if(n == 0){
        return sum;
    }
    int digit = n%10;
    sum +=digit;
    
    return sumofDig(n/10,sum);
    //MY FAULT
    //OUR FAULT
    //YOUR FAULT

}

int main(){
    int n = 511;

    int sum = 0;

    int ans = sumofDig(n,sum);
    cout << ans;



}