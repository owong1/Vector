#include <iostream>
#include "Vector.h"

using namespace std;

int main(){
	Vector<int> a;
	Vector<int> b;
	Vector<int> c;
	int i, j;
	
	a.setValAtPos(1, 0, 0);
	a.setValAtPos(2, 1, 0);
	a.setValAtPos(2, 0, 1);
	a.setValAtPos(3, 1, 1);

	b.setValAtPos(2, 0, 0);
	b.setValAtPos(3, 1, 0);
	b.setValAtPos(3, 0, 1);
	b.setValAtPos(4, 1, 1);

	cout << "2D Vector 1: " << endl;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << a.getValAtPos(i, j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "2D Vector 2: " << endl;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << b.getValAtPos(i, j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Vector 1 + Vector 2: " << endl;
	c = a + b;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << c.getValAtPos(i, j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Vector 2 - Vector 1: " << endl;
	c = b - a;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << c.getValAtPos(i, j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Vector 1 * Scalar 2: " << endl;
	c = a * 2;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			cout << c.getValAtPos(i, j) << " ";
		}
		cout << endl;
	}
}