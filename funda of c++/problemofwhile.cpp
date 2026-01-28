// take a 6 digit input number 
// extract the number
// sum of each digit

#include<iostream>
using namespace std;

int main(){
    long int n;
    cout << "ENter  the Number: ";
    cin >> n;
    int sum = 0;
    int temp = n;

    while(temp > 0){
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    cout << "Sum is : " << sum;

}
