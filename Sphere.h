#pragma once
#include "Volume.h"
class Sphere :
    public Volume
{
private:
    double R;
public:
    Sphere (double value);
    virtual ~Sphere() {};

    void SetR(double value) { R = value; };
    double const GetR() { return R; };

    double volume() override;
};

