#include<fstream>
#include<iostream>


using namespace std;



int main(){
    ofstream file("dataa.txt");

    if(!file){
        cout <<"File not Fount!!";

    }

    for(int i=0;i<100;i++){
        file << "Hello world" << endl;
    }

    file.close();

}
