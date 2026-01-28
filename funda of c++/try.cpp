#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of stock items : ";
    cin >> n;

    string itemNmae[50];
    int quantity[50];
    float price[50];

    // INPUT STOCK DETAILS

    for(int i=0; i<n ; i++){
        cout << "\nEnter the details of items "<<i+1<<endl;
        cout<<"Item name -> ";
        cin>> itemNmae[i];
        cout << "Quantity -> ";
        cin >> quantity[i];
        cout << "Price -> ";
        cin >> price[i];
    }

    // DISPLAY STOCKS
    cout <<"\n------- Stock Details -------"<<endl;

    float totalValue=0;
    
    for(int i=0; i<n; i++){
        float value = quantity[i] * price[i];
        totalValue = totalValue + value;

        cout << "Item : " << itemNmae[i] << " | Quantity " << quantity[i] << " | Price " << price[i] << endl;
        
    }
    cout << "\nTotal Value : "<<totalValue<<endl;
}