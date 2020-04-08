#include <iostream>
#include "../../inc/guitar_class.h"

using namespace std;

Guitar::Guitar()
{
    GuitarSpec *pSpec = &spec;
    pSpec = new GuitarSpec("dummyModel");
    serialNumber = -1;
}
    
int Guitar::getSerialNumber()
{
    return -1;
}

GuitarSpec Guitar::getSpec()
{
    return -1;
}