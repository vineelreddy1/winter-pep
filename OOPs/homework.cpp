#include <iostream>
using namespace std;

class PasswordVault {
    string owner;
    string* passwords;
    int capacity;
    int count;                 // per-vault count
    static int currentCount;   // total passwords (shared)

public:
    PasswordVault(string name, int cap) {
        owner = name;
        capacity = cap;
        count = 0;
        passwords = new string[capacity];
    }

    void addPassword(string pass) {
        if (count >= capacity) {
            cout << "Vault full for " << owner << endl;
            return;
        }
        passwords[count++] = pass;
        currentCount++;  // total system passwords
    }

    void print() {
        cout << "Passwords of " << owner << ":\n";
        for (int i = 0; i < count; i++) {
            cout << passwords[i] << endl;
        }
    }

    static int getTotalPasswords() {
        return currentCount;
    }

    // Copy Constructor
    PasswordVault(const PasswordVault& p) {
        owner = p.owner;
        capacity = p.capacity;
        count = p.count;

        passwords = new string[capacity];
        for (int i = 0; i < count; i++) {
            passwords[i] = p.passwords[i];
        }
    }

    // Destructor
    ~PasswordVault() {
        delete[] passwords;
    }
};

// Static variable definition
int PasswordVault::currentCount = 0;

int main() {
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
