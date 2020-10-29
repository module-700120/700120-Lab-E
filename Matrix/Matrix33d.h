#pragma once

#include "Vector3d.h"

//-------------------------------------------------------------------------
// Double precision, 3x3 Matrix class
//-------------------------------------------------------------------------

class Matrix33d {
	static constexpr double _epsilon = 1.0e-8;
	
	Vector3d _row[3]{};
	
public:
	Matrix33d() = default;

	explicit Matrix33d(const double m[9]) {
		_row[0]._x = m[0]; _row[0]._y = m[1]; _row[0]._z = m[2];
		_row[1]._x = m[3]; _row[1]._y = m[4]; _row[1]._z = m[5];
		_row[2]._x = m[6]; _row[2]._y = m[7]; _row[2]._z = m[8];
	}
};
