#ifndef VECTOR_H
#define VECTOR_H

template <class T>
class Vector{
private:
	T arr[2][2];
	//sizes are integers, programmer use only
	const int sizeX = 2;
	const int sizeY = 2;
public:
	//default constructor
	Vector();
	//copy constructor
	Vector(const Vector& v);
	//destructor
	~Vector();
	//assignment operator
	Vector& operator = (const Vector& v);

	//memory access
	void setValAtPos(int val, int x, int y);
	int getValAtPos(int x, int y);

	//overloads
	//equivalence
	bool operator == (const Vector& v);
	//add
	Vector& operator + (const Vector& v);
	//subtract
	Vector& operator - (const Vector& v);
	//scalar product
	Vector& operator * (T s); 


	//bound checking
	void checkBounds(int n, int dimension);
};

#endif