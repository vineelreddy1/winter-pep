// private;
#include<iostream>

using std::string;
using std::cout;
using std::endl;

class BankAccount {
    private:
    double balance = 100;

    public:
    static double totalBankcash;

    BankAccount(double balance){
        this->balance = balance;
        totalBankcash+=balance;

    }
    friend class TaxAuditor;
}; 


double BankAccount::totalBankcash = 0;

 class TaxAuditor{
    public:

    void inspect(BankAccount &account){
        cout << "Balance: " <<  account.balance << endl;

    }


};


int main()
{
    BankAccount person1(1000);
    BankAccount person2(2000);

    
    
    TaxAuditor inspector;
    inspector.inspect(person1);
    inspector.inspect(person2);
    cout<< "Total Bank Cash : " << BankAccount::totalBankcash << endl;

    
}

