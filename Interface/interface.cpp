#include<iostream>
using namespace std;


class ICarComponents{
    public:
    virtual void engine() =0;
    virtual void gearbox() = 0;
    virtual void Steeringwheel() = 0;


};


class HybridCar : public ICarComponents{

    public:
    void engine() override{
        cout << "Hybrid Engine\n";
    }
    void gearbox() override{
        cout << "Automatic gearBox\n";
    }

    void Steeringwheel() override{
        cout << "PoWER steering \n";

    }

};

int main(){

    HybridCar h;
    h.engine();
    h.gearbox();
    h.Steeringwheel();




}