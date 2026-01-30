// make a class payment

// derive -> google play inherit payment;

// calss -> apple play inherit;

// pay () -> virtual in base class and abstract

//different pay override in google pay and override;




#include <iostream>
using namespace std;

class Payment{

    public:
    //pure virtual
    virtual void pay() = 0;

};

class Gpay : public Payment{
    private:

    void pay(){
        cout << "Gpay charges 0 platform fee\n";
    }
};
class Applepay : public Payment{
    public:

    void pay(){
        cout << "Apple pay charges 1.5 platform fee";
    }
};


int main(){




    Payment *entity_ptr = new Gpay();

    entity_ptr->pay();

    Payment *new_ptr = new Applepay();
    new_ptr->pay();
    

}