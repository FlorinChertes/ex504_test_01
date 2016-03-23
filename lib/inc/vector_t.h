


class Vector 
{
public:
	Vector(int s); // construct a Vector

	double& operator[](int i); // element access: subscripting
	int size();

private:
	double *elem;	// pointer to the elements
	int sz;			// the number of elements
};
