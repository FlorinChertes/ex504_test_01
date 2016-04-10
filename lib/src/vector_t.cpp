
#include<vector_t.h>

#include <stdexcept>


Vector::Vector(int s)
	:elem{ new double[s] },
	sz{ s }
{
	// construct a Vector
} 

Vector::Vector(std::initializer_list<double> lst)
	:elem{ new double [lst.size()]},
	sz{static_cast<int>(lst.size())}
{
	std::copy(lst.begin(), lst.end(), elem);
}

Vector::~Vector()
{
	delete[] elem;
}

double& Vector::operator[](int i)
{ 
	if (i < 0 || size() <= i)
	{
		throw std::out_of_range("Vector::operator[]");
	}
	return elem[i]; 
}

int Vector::size()
{ 
	return sz; 
}
