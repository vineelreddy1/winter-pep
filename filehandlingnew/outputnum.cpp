#include<iostream>
#include<fstream>
using namespace std;


int main(){
    // ofstream fout;

    // fout.open("data7.txt");

    // if(!fout){
    //     cout << "File Not FOund";
    // }


    // for(int i=0;i<5;i++){
    //     fout << i;
    // }


    ifstream fin;

    fin.open("data7.txt");

    int n;

    while(fin >> n){
        cout << n << " ";
    }
}
