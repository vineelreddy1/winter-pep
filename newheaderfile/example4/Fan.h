#pragma once
#include "IDevice.h"

class Fan : public IDevice{

    public:
    void turnOn();
    void turnOff();

};