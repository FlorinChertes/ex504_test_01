
#include <vector_t.h>

#include <iostream>
#include <stdexcept>


void test_vector()
{
	try 
	{
		std::cout << "test vector" << std::endl;
		Vector vect(5);
		std::cout << "vector size: " << vect.size() << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "out_of_range exception" << std::endl;
	}

}