#include <iostream>
#include "../inc/guitar_class.h"
// #include "../inc/guitar_spec.h"

using namespace std;

int main()
{
    cout << "Hello world for Guitar inventory with new operator!\n";

    // new returns address of the object in heap
    // Guitar *pTestGuitar = new Guitar();
    // cout << "Serial number for testGuitar: " << (*pTestGuitar).getSerialNumber();

    GuitarSpec spec = *(new GuitarSpec("model_1", Sandal, Sandal, Acoustic, DummyBuilder));

    cout <<"\nModel: " <<spec.getModel() <<"\ntop_wood: " <<spec.getTopWood();

    Guitar guitar = *(new Guitar(1234, 1000, spec));

    cout <<"\nNew guitar objects topwood: " <<guitar.getSpec().getTopWood();
}