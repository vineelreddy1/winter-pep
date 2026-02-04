#include<iostream>

using namespace std;
int main(){
      int arr[10] = {10,11,12,13,14,15,16,17,19,20};

    int temp = arr[0];
    for(int i=0;i<10;i++){

        if(temp < arr[i]){
            temp = arr[i];

        }

    }

    cout << temp <<endl;

    int secondlargest = arr[0];
    for(int i=0;i<10;i++){
        if(arr[i] < temp && arr[i] > secondlargest){
            secondlargest = arr[i];
        }

    }
    cout << secondlargest;


}