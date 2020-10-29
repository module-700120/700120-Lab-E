#pragma once

//-------------------------------------------------------------------------
// Double precision, 3D vector class
//-------------------------------------------------------------------------

class Vector3d {
	static constexpr double _epsilon = 1.0e-8;
	
public:
	double _x;
	double _y;
	double _z;

	// Default constructor
	Vector3d() = default;

	// Construct from double. Assigns double value to all elements of vector
	explicit Vector3d(const double value) : _x(value), _y(value), _z(value) {}

	// Construct from three doubles. Assigns the three parameters to the X,Y,Z elements of the vector
	Vector3d(const double x, const double y, const double z) : _x(x), _y(y), _z(z) {}

	//-------------------------------------------------------------------------

	// Vector addition. The code A = L.Add(R) is equivalent to A=L+R
	Vector3d add(const Vector3d &v) const { return { _x + v._x, _y + v._y, _z + v._z }; }

	// Vector subtraction. The code A = L.Subtract(R) is equivalent to A=L-R
	Vector3d subtract(const Vector3d &v ) const { return { _x - v._x, _y - v._y, _z - v._z }; }

	//-------------------------------------------------------------------------

	// Squared length of vector. When comparing length, it is generally faster to compare the squared length to avoid the square root calculation
	double lengthSqr () const { return (_x * _x + _y * _y + _z * _z); }

	// Length of vector. This returns the length (magnitude) of the vector
	double length() const;

	// Squared of distance between two vectors. When comparing distances, it is generally faster to compare the squared distance to avoid the square root calculation
	double distanceSqr(const Vector3d &v) const { return subtract(v).lengthSqr(); }

	// Distance between two vectors.
	double distance(const Vector3d &v) const { return subtract(v).length(); }

	//-------------------------------------------------------------------------

	// Normalise a vector. The operation L.Normalise(R) replaces L with the normalised (unit length) version of R. It is equivalent to L=R.Normalise() but with less overhead, since a temporary object	is not returned.
	const Vector3d & normalize(const Vector3d &v);

	// Normalise a vector in place. If the vector is zero magnitude, then the result is a zero vector
	const Vector3d & normalize() { return normalize(*this); }

	//-------------------------------------------------------------------------

	// Vector is near zero. Returns true if a vector is very close to zero. The default tolerance can be overidden.
	bool isZero(const double tolerance = _epsilon) const { return lengthSqr() <= (tolerance * tolerance); }

	// Vector is near unit-length. Returns true if vector is very close to unit length. The default tolerance can be overidden.
	bool isUnit(double tolerance = _epsilon) const;

	// Vector this is near equal to V. Returns true if vector this and V are very close to equal. The default tolerance can be overidden.
	bool isEqual(const Vector3d &v, const double tolerance = _epsilon) const { return subtract(v).isZero(tolerance); }

	//-------------------------------------------------------------------------

	// Exact equality. Returns true if both vectors are exactly equal
	bool operator == (const Vector3d &v) const { return isEqual(v); }

	// Inequality operator. Returns true if the vectors are not exactly equal
	bool operator != (const Vector3d &v) const { return !isEqual(v); }
};