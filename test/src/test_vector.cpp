
#include "../../lib/inc/vector_t.h"

#include <iostream>
#include <stdexcept>

#include <cmath>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
double sqrt_sum(Vector& v)
{
	double sum = 0.0;
	for (int i = 0; i != v.size(); ++i)
	{
		sum += sqrt(v[i]);
	}
	return sum;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
TEST(VectorTest, test_initialize_list_001)
{
	try
	{
		Vector v1 = { 1.2, 2.3, 3.4, 5.5 };
		double summ{ 0.0 };
		for (int i = 0; i < v1.size(); ++i)
		{
			summ += v1[i];
		}

		EXPECT_EQ(summ, 12.4);
	}
	catch (std::out_of_range&)
	{
		std::cout << "out_of_range exception" << std::endl;
	}
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
TEST(VectorTest, test_vector_001)
{
	try 
	{
		Vector vect(12);
		EXPECT_EQ(vect.size(), 12);
	}
	catch (std::out_of_range&)
	{
		std::cout << "out_of_range exception" << std::endl;
	}
}

