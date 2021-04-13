#include <cmath>

#include "sqrt.hpp"

double
sqrt(double a)
{
	return std::pow(a, 0.5);
}

double
sqrt(int a)
{
        return std::pow(a, 0.5);
}

