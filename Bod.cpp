#include "Bod.h"
#include <iostream>

Bod::Bod()
{
    x=0.0;
    y=0.0;
}

Bod::Bod(double x_in, double y_in)
{
    x = x_in;
    y = y_in;
}

void Bod::posun(double xp, double yp)
{
    x == xp;
    y == yp;
}

void Bod::vypis() const
{
    std::cout << "(" << x << "," << y << ")"<< "\n";
}

Bod::~Bod()
{
    //dtor
}
