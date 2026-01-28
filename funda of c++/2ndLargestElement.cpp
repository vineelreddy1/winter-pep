#include <iostream>
using namespace std;

void sorted(int arr[], int size){    
    for(int i=0; i < size-1; i++){
        for(int j=0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout << "Enter number of elements : "<<endl;
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    sorted(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}