#pragma once
#include "Volume.h"
class Tetrahedron :
    public Volume
{
    double a;
public:
    Tetrahedron(double value1);
    virtual ~Tetrahedron() {};

    void SetA(double value) { a = value; };
    double const GetA() { return a; };

    double volume() override;
};

