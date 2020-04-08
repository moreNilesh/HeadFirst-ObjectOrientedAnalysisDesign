#include <iostream>
#include "guitar_spec.h"

using namespace std;

class Guitar
{
    public:
        Guitar();
        int getSerialNumber();
        GuitarSpec getSpec();

    private:
        int        serialNumber;
        GuitarSpec spec;
};
