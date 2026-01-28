#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int num[n] = {10, 20, 30, 40, 50};
    int i = 0 , j = n-1;
    while(i<j){
        if(num[i] < num[j]){
            int temp = num[i];
            num[i] = num[j];
            num[j] = temp;
        }
        
    }
    
    
    return 0;
}

