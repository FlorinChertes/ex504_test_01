
#include <vector_t.h>

#include <iostream>
#include <stdexcept>

#include <cmath>

double sqrt_sum(Vector& v)
{
	double sum = 0.0;
	for (int i = 0; i != v.size(); ++i)
	{
		sum += sqrt(v[i]);
	}
	return sum;
}

void test_initialize_list_001()
{
	try
	{
		Vector v1 = { 1.2, 2.3, 3.4 };

		for (int i = 0; i < v1.size(); ++i)
		{
			std::cout << v1[i] << std::endl;
		}

	}
	catch (std::out_of_range&)
	{
		std::cout << "out_of_range exception" << std::endl;
	}
}

void test_vector()
{
	try 
	{
		std::cout << "test vector" << std::endl;
		Vector vect(12);
		std::cout << "vector size: " << vect.size() << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "out_of_range exception" << std::endl;
	}

}