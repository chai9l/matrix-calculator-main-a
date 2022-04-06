#include "vector"
#include <iostream>

namespace zich
{
    class Matrix
    {
    private:
        std::vector<std::vector<double>> mat;

    public:
        Matrix(const std::vector<double> &mat, int rows, int cols);
        Matrix();

        Matrix operator+(const Matrix &other); // c = a+b
        Matrix operator+();                    // unary
        void operator+=(const Matrix &other);  // a = a+b

        Matrix operator-(const Matrix &other); // c = a-b
        Matrix operator-();                    // unary
        void operator-=(const Matrix &other);  // a = a-b

        Matrix operator*(const Matrix &other);                        // c = a*b
        friend Matrix operator*(const double num, const Matrix &mat); // b = num*a
        void operator*=(const Matrix &other);                         // a = a*b
        void operator*=(const double num);                            // a = a*num

        void operator++();
        void operator--();
        void operator++(int);
        void operator--(int);

        bool operator>(const Matrix &other);
        bool operator>=(const Matrix &other);
        bool operator<(const Matrix &other);
        bool operator<=(const Matrix &other);
        bool operator==(const Matrix &other);
        bool operator!=(const Matrix &other);

        friend std::ostream &operator<<(std::ostream &s, const Matrix &mat); // cout
        friend std::istream &operator>>(std::istream &s, const Matrix &mat); // cin
    };
}