#include <iostream>
using namespace std;


class Car {

    public:
    Car()
    {
        cout<<"Base class Car is Created"<<endl;
    }

    
    virtual ~Car()
    {
        cout<<"Base class car is  Destructed"<<endl;
    }

};


class Ferrari : public Car{
    public:
    Ferrari()
    {
        cout<<"derived Class Ferrari is Created"<<endl;
    }

    ~Ferrari()
    {
        cout<<"Derived Class Ferrari is dESTRUCTED"<<endl;
    }
};


int main ()
{

    Car* object_ptr = new Ferrari;
    
    delete object_ptr;


}