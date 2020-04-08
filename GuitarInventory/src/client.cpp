#include <iostream>
#include "../inc/guitar_class.h"

using namespace std;

int main()
{
    cout << "Hello world for Guitar inventory with new operator!\n";

    // new returns address of the object in heap
    Guitar *pTestGuitar = new Guitar();
    cout << "Serial number for testGuitar: " << (*pTestGuitar).getSerialNumber();
}