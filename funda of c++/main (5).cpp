#include <iostream>
#include<string.h>
#include<vector>

using namespace std;

vector<string> str;

void addtext(){
    string text;
    cout << "Enter your text: ";
    getline(cin,text);
    str.push_back(text);
    
}
void printtext(){
    int n = str.size();
    for(int i=0;i<n;i++){
        cout << str[i] << " ";
    }
    
}
void totalcount(){
    int n = str.size();
    int count = 0;
    for(int i=0;i<n;i++){
        count+=1;
    }
    cout << "total count is : "<< count ;
    
}





int main()
{
    while(true){
        int choice;
        cout << "case 1 : ADD" << endl;
        cout << "case 2 : print" << endl;
        cout <<"case 3 : count" << endl;
        cout << "case 4: exit" << endl;
        
        cin >> choice;
        cin.ignore();
        
        

        switch(choice){
            case 1:
            addtext();
            break;
            case 2:
            printtext();
            break;
            case 3:
            totalcount();
            break;
            case 4:
            exit(0);
            break;
            
            default:
            cout << "ENter correct command.";
            break;
            
        }
        
    }
    

    return 0;
}