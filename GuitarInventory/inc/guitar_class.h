#include <iostream>
#include "guitar_spec.h"

using namespace std;

class Guitar
{
    public:
        Guitar();
        Guitar(int serialNumber, int price, GuitarSpec spec);

        int        getSerialNumber();
        int        getPrice();
        int        updatePrice();
        GuitarSpec getSpec();

    private:
        int        price;
        int        serialNumber;
        GuitarSpec spec;
};
