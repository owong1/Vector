#include "Vector.h"
#include <iostream>
#include <cassert>

//default constructor
template <class T>
Vector<T>::Vector<T>(){
	//set each element to 0
	for (int x = 0; x < sizeX; x++){
		for (int y = 0; y < sizeY; y++){
				arr[x][y] = 0;
		}
	}
}

//copy constructor
template <class T>
Vector<T>::Vector<T>(const Vector<T>& v){
	//use the assignemnt operator to do this
	*this = v;
}

//destructor
template <class T>
Vector<T>::~Vector<T>(){

}

//assignment operator
template <class T>
Vector<T>& Vector<T>::operator = (const Vector<T>& v){
	//copy each individual element
	for (int x = 0; x < sizeX; x++){
		for (int y = 0; y < sizeY; y++){
				this->arr[x][y] = v.arr[x][y];
		}
	}
	return *this;
}

//memory access
template <class T>
void Vector<T>::setValAtPos(int val, int x, int y){
	//check bounds on the attempted access
	checkBounds(x, 1);
	checkBounds(y, 2);
	//if it hasn't asserted then the location exists
	arr[x][y] = val;
}

template <class T>
int Vector<T>::getValAtPos(int x, int y){
	//check bounds on the attempted access
	checkBounds(x, 1);
	checkBounds(y, 2);
	//if it hasn't asserted then the location exists
	return arr[x][y];
}

//bound checking
template <class T>
void Vector<T>::checkBounds(int n, int dimension){
	//switch statement for which bound to check
	switch (dimension){
	//if first dimension, check x
	case 1:
		assert(n < sizeX);
		break;
	//if second dimension, check y
	case 2:
		assert(n < sizeY);
		break;
	//if it's neither, quit switch
	default:
		break;
	}
}

//equivalence overload
template <class T>
bool Vector<T>::operator == (const Vector<T>& v){
	//cycle through all the elements
	for (int x = 0; x < sizeX; x++){
		for (int y = 0; y < sizeY; y++){
			//if a non-identical element is encountered, it's not equal
			if (this->arr[x][y] != v.arr[x][y]){
				return false;
			}
		}
	}
	//if all the elements pass the check, the vectors are equal
	return true;
}

//addition overload
template <class T>
Vector<T>& Vector<T>::operator + (const Vector<T>& v){
	//create new memory space to return
	Vector<T> *result = new Vector<T>;
	//cycle through all the elements
	for (int x = 0; x < sizeX; x++){
		for (int y = 0; y < sizeY; y++){
			//add each individual element
			result->arr[x][y] = this->arr[x][y] + v.arr[x][y];
		}
	}
	return *result;
}

//subtraction overload
template <class T>
Vector<T>& Vector<T>::operator - (const Vector<T>& v){
	//create new memory space to return
	Vector<T> *result = new Vector<T>;
	//cycle through all the elements
	for (int x = 0; x < sizeX; x++){
		for (int y = 0; y < sizeY; y++){
			//subtract each individual element
			result->arr[x][y] = this->arr[x][y] - v.arr[x][y];
		}
	}
	return *result;
}

//scalar product
//multiply scalar into every number in vector
template <class T>
Vector<T>& Vector<T>::operator * (T s){
	Vector<T> *result = new Vector<T>;
	for (int x = 0; x < sizeX; x++){
		for (int y = 0; y < sizeY; y++){
			result->arr[x][y] = this->arr[x][y] * s;
		}
	}
	return *result;
}

//explicit instantiations with templates
template class Vector<int>;
//template class Vector<int*>;
//template class Vector<float>;
//template class Vector<float*>;
template class Vector<double>;
//template class Vector<double*>;
//template class Vector<char>;
//template class Vector<char*>;
//template class Vector<std::string>;