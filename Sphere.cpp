#include "Sphere.h"
#include <iostream>
#define PI 3.14159

using namespace std;

Sphere::Sphere(double value)
{
	while (value <= 0)
	{
		cout << "Enter value of R again: "; cin >> value;
	}
	R = value;
}

double Sphere::volume()
{
	return 4 * PI * pow(R, 3) / 3;
}