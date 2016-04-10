
#include <initializer_list>


class Vector 
{
public:
	Vector(int s); // construct a Vector
	Vector(std::initializer_list<double>);

	~Vector();

	double& operator[](int i); // element access: subscripting
	int size();

private:
	double *elem;	// pointer to the elements
	int sz;			// the number of elements
};
