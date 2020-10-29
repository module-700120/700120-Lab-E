#include <iostream>

#include "Vector3d.h"

int main (int, char**) {
	const Vector3d a(1,2,3);
	const Vector3d b(3,4,5);

	const auto c = a.add(b);
	std::cout << "x= " << c._x << std::endl;

	return 0;
}