#include <sqrt.hpp>

#include <gtest/gtest.h>



TEST(Sqrt, DoubleValue)
{
	double a = 4.;
	double ref = 2.;
	double result = sqrt(a);
	ASSERT_EQ(ref, result);
}
