#include <iostream>
#include <string>

using namespace std;

enum Wood
{
    Plywood,
    Sandal,
    Sagwan
};

enum Type
{
    Electric,
    Acoustic
};

enum Builder
{
    DummyBuilder
};

class GuitarSpec
{
    public:
        GuitarSpec();
        GuitarSpec(string model, Wood top_wood, Wood back_wood, Type type,
                   Builder builder);
        string getModel();

    private:
        string   model;
        Wood     top_wood;
        Wood     back_wood;
        Type     type;
        Builder  builder;
};
