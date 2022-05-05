#pragma once
#include "Volume.h"
class Parallelepiped :
    public Volume
{
private:
    double x;
    double y;
    double z;
public:
    Parallelepiped(double value1, double value2, double value3);
    virtual ~Parallelepiped() {};

    void SetX(double value1) { x = value1; };
    void SetY(double value2) { y = value2; };
    void SetZ(double value3) { z = value3; };
    double GetX() { return x; };
    double GetY() { return y; };
    double GetZ() { return z; }

    double volume();
};

