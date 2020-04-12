#include <iostream>
#include "../../inc/guitar_class.h"

using namespace std;

Guitar::Guitar()
{
    // GuitarSpec *pSpec = &spec;
    // pSpec = new GuitarSpec("dummyModel");
    // serialNumber = -1;
}

Guitar::Guitar(int serialNumber, int price, GuitarSpec spec)
{
    //
    // Default of cpp compiler is to do shallow copy. If you want to enforce
    // different behavior, override assignment operator.
    // For string object, it seems like class already takes care of deep copy
    //
    this->serialNumber = serialNumber;
    this->price        = price;
    this->spec         = spec;
}

int Guitar::getSerialNumber()
{
    return -1;
}

GuitarSpec Guitar::getSpec()
{
    return this->spec;
}