#include<iostream>
#include<string.h>

using namespace std;
int main(){

    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    int i = 0, j = n - 1;
    
    while(i<j){
        if(arr[i] < arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    
    
    
}
    
    
    


