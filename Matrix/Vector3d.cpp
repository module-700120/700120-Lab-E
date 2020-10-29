#include "Vector3d.h"
#include <cmath>


double Vector3d::length() const {
	return sqrt(lengthSqr());
}


const Vector3d & Vector3d::normalize( const Vector3d &v ) {
	const auto length = v.length();
	if (fabs(length) > _epsilon) {
		const auto rep = 1.0 / length;
		return *this = { v._x * rep, v._y * rep, v._z * rep };
	}
	return *this;
}


bool Vector3d::isUnit(const double tolerance) const {
	return fabs(lengthSqr() - 1.0) <= (tolerance * tolerance);
}