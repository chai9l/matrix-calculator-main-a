#include <iostream>
#include <stdexcept>
#include "Matrix.hpp"

using namespace zich;

//------------------------Matrix implementation------------------------------------

Matrix::Matrix(const std::vector<double> &mat, int rows, int cols)
{
}

Matrix::Matrix()
{
}

Matrix Matrix::operator+(const Matrix &other)
{
    const std::vector<double> mat = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    const int rows = 3;
    const int cols = 3;
    return Matrix(mat, rows, cols);
}

Matrix Matrix::operator+()
{
    return Matrix();
}

void Matrix::operator+=(const Matrix &other)
{
}

Matrix Matrix::operator-(const Matrix &other)
{
    return Matrix();
}

Matrix Matrix::operator-()
{
    return Matrix();
}

void Matrix::operator-=(const Matrix &other)
{
}

Matrix Matrix::operator*(const Matrix &other)
{
    return Matrix();
}

void Matrix::operator*=(const Matrix &other)
{
}

void Matrix::operator*=(const double num)
{
}

void Matrix::operator++()
{
}

void Matrix::operator--()
{
}

void Matrix::operator++(int)
{
}

void Matrix::operator--(int)
{
}

bool Matrix::operator>(const Matrix &other)
{
    return true;
}

bool Matrix::operator>=(const Matrix &other)
{
    return true;
}

bool Matrix::operator<(const Matrix &other)
{
    return true;
}

bool Matrix::operator<=(const Matrix &other)
{
    return true;
}

bool Matrix::operator==(const Matrix &other)
{
    return true;
}

bool Matrix::operator!=(const Matrix &other)
{
    return true;
}

// --------------------------------------------------------------------

namespace zich
{
    Matrix operator*(const double num, const Matrix &mat)
    {
        return Matrix();
    }

    std::ostream &operator<<(std::ostream &s, const Matrix &mat)
    {
        return s;
    }

    std::istream &operator>>(std::istream &s, const Matrix &mat)
    {
        return s;
    }
}