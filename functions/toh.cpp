#include<iostream>

using namespace std;

void toh(int n , char src , char aux , char des){
    if(n == 1){
        cout << "Move disk " << n << " " << "from " << src << "to " << des << endl;
        return;
    }
    toh(n-1,src , des ,aux);
    cout << "Move disk from " << n << " " << src << " to" << aux << endl;
    
    toh(n-1,aux , src , des);

}



int main(){
    int n;
    // cout << "Enter the no of hanois: " << endl;
    // cin >> n;

    toh(3 , 'A' , 'B' , 'C');
    
}