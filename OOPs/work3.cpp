#include<iostream>
using namespace std;


class PasswordVault{

    string owner;
    string* passwords;
    int capacity;
    int count;
    static int currentCount;

    public:

    PasswordVault(string name, int cap){
        this->owner = name;
        this->capacity = cap;
        count = 0;
        passwords = new string[capacity];

    }

    
    void addPassword(string pass){
        if(count >= capacity){
            cout << "Vault Full for " << owner << endl;
            return;
        }
        passwords[count++] = pass;
        currentCount++;
        
    }
    
    void print(){
            cout << "Passwords of " << owner << ": \n" ;
            for(int i=0;i<count;i++){
                cout << passwords[i] <<  endl;
            }
            
        }

        static int getTotalPasswords(){
            return currentCount;

        }



        PasswordVault(PasswordVault &p){
            this->owner = p.owner;
            this->capacity = p.capacity;
            this->count = p.count;

            passwords = new string[capacity];

            for(int i=0;i<count;i++){
                passwords[i] = p.passwords[i];
            }
            
        }


        ~PasswordVault() {
        delete[] passwords;
        currentCount--;
    }
};

int PasswordVault::currentCount = 0;

int main(){
    PasswordVault v1("Vineel", 2);
    v1.addPassword("abc123");
    v1.addPassword("hello@123");

    PasswordVault v2("Admin", 2);
    v2.addPassword("root");

    v1.print();
    v2.print();

    cout << "Total passwords in system: "
         << PasswordVault::getTotalPasswords() << endl;

}