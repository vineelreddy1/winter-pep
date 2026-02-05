#include<iostream>
#include<fstream>


using namespace std;

void charbychar(ifstream &fin){
    char ch;
     while(fin.get(ch)){
        cout << ch << " ";
    }
}

void lineByline(ifstream &fin){
    string s;
    getline(fin,s);
    cout << s;

}
void WordByword(ifstream &fin){
    string s;
    while(fin >> s){
    cout << s << endl;
    }

}


int main(){

    ifstream fin;
    fin.open("data.txt");
    string s;


    if(!fin){
        cout << "File not fount";
    }

    //line by line;

    // lineByline(fin);

    // getline(fin,s);
    // cout << s;


    //character by character
    // charbychar(fin);
    // char ch;

    // while(fin.get(ch)){
    //     cout << ch << " ";
    // }


    //wordbyword
    WordByword(fin);

    // while( fin >> s){
    //     cout << s << endl;
    // }




}