#pragma once
#include "Volume.h"

class Pyramid :
    public Volume
{
private:
    double x;
    double y;
    double h;
public:
    Pyramid(double value1, double value2, double value3);
    virtual ~Pyramid() {};

    double const GetX();
    double const GetY();
    double const GetH();
    void SetX(double value);
    void SetY(double value);
    void SetH(double value);

    double volume() override;
};

