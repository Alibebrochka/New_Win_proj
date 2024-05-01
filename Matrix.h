#pragma managed(push, off)
#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
#include <initializer_list>
#include <cmath>
#include <algorithm>


using namespace std;

const double PI = 3.141592653589793238;

class Matrix
{
	size_t rows;
	size_t columns;
	vector<vector<double> >matrix;
public:
	Matrix();
	Matrix(size_t m_rows, size_t m_columns, double fill = 0.0);
	Matrix(size_t m_rows, size_t m_columns, initializer_list<initializer_list<double>> element, double fill = 0.0);
	Matrix(const Matrix& m) = default;

	size_t Rows() const;
	size_t Columns() const;
	size_t size(size_t dim) const;
	Matrix T();
	double det() const;
	Matrix inv();
	Matrix Degree(size_t num);
	double Trace_of_matrix();
	// метод Ћеверье
	vector<double> CharacteristicPolynomial();
	//метод якоб≥
	void Eigenvalues();

	static Matrix IdentityMatrix(size_t dimension);
	static Matrix mult_by_elment(Matrix A, Matrix B);

	//повертаЇ число за координатами
	double get(int row, int col);
	//зам≥на числа матриц≥ за координатами на вказане число
	Matrix rep(int row, int col, double replacement);

	Matrix operator+(Matrix& other)const;
	Matrix operator+(const double& num);
	Matrix operator-(Matrix& other)const;
	Matrix operator-(const double& num);
	Matrix operator*(Matrix& other)const;
	Matrix operator*(const double& num);
	Matrix operator/(const double& scalar);

	friend istream& operator>>(std::istream& in, Matrix& m);
	friend ostream& operator<<(std::ostream& out, const Matrix& m);
	~Matrix();

};
#endif
#pragma managed(pop)