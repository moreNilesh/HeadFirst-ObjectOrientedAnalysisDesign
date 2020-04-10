#include <iostream>
#include "../../inc/guitar_class.h"

using namespace std;

GuitarSpec::GuitarSpec()
{
    ;
}

GuitarSpec::GuitarSpec(string model, Wood top_wood, Wood back_wood, Type type,
                       Builder builder)
{
    this->model     = model;
    this->top_wood  = top_wood;
    this->back_wood = back_wood;
    this->type      = type;
    this->builder   = builder;
}

string GuitarSpec::getModel()
{
    return model;
}