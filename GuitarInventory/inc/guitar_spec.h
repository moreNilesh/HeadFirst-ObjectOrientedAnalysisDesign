#include <iostream>
#include <string>

using namespace std;

class GuitarSpec
{
    public:
        GuitarSpec(string model)
        {
            this->model = model;
        }

    private:
        string model;
};
