#include<iostream>
using namespace std;


class IDevice{
    public:
    virtual void turnOn() =0;
    virtual void turnOff() = 0;



    ~IDevice(){
        cout << "Devices are deleted";
    }


};


class Tv : public IDevice{

    public:
    void turnOn() override{
        cout << "Turn on the TV\n";
    }
    void turnOff() override{
        cout << "Turn off the TV\n";
    }
    

};
class Fan : public IDevice{

    public:
    void turnOn() override{
        cout << "Turn on the Fan\n";
    }
    void turnOff() override{
        cout << "Turn off the Fan\n";
    }
    

};

int main(){

    IDevice* device[2];
    device[0] = new Tv();
    device[1] = new Fan();

    for(int i=0;i<2;i++){
        device[i]->turnOn();
        delete device[i];
    }




}