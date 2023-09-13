# 700120-Lab-E

## GIT

All the source code for this lab exercise is on the GIT

## 1 Basic vectors

Open the project **Vector Basics**.  This project contains a class `Vector3d`.
Walk through the code for `Vector3d` and familiarize yourself with the names and structure of the methods.

Why are some methods in-lined and others not?

Add the following new methods:

- Vector product (i.e. cross product)
- Scalar product (i.e. dot product)

Add new methods which overload the following binary operators:

- `+` vector addition
- `-` vector subtraction
- `*` scalar product
- `^` vector product
- `+=` vector addition
- `-=` vector subtraction
- `<<` stream out
- `>>` stream in

Add new methods which overload the following unary operators:

- `-` vector inversion (reverse the vector)

Now that you have 3 methods to add two vectors, use the timing code from early labs to analyse the performance of each implementation.

## 2 Commutativity

Within vector mathematics it is possible to multiply a vector by a single number.

Implement both a standard method and overload the `*` operator to multiply a vector by a single double.

Also implement the multiplication of a single double by a vector.

Why is this last requirement more problematic than the preceding requirement?

## 3 Matrices

Open the project **Matrices**. This project contains a partial implementation of the class `Matrix33d`.

Walk through the code for `Matrix33d` and familiarise yourself with the names and structure of the methods.

Using the knowledge gained from the previous exercises on Vector mathematics, complete the `Matrxix33d` class.

Functionality to be included:

- Addition
- Subtraction
- Multiplication
- Streaming in and out
- Inverse
- Transpose
  
Your implementation should balance efficiency with maintainability.

## 4 Vector and Matrix Multiplication

Expand your `Matrix33d` class to be able to multiple a `Vector3d` object by a `Matrix33d` object.

## 5 Internal data structures

Now that you are familiar with the two classes, examine the internal data structures.

Is having the components of a vector stored as individual attributes a good implementation, or would it be advantageous to instead store the components in an array of rank 1 and size 3?

The current `Matrxi33d` is implemented using `Vector3d`s.  Is this a good approach, or would it be better to implement as either an array of rank 2 and size 3 or an array of rank 1 and size 9?

Now implement the `Matrxi33d` using one of these different data formats and assess the performance using the timing code from earlier labs.
