#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H

#include "matrix_base.h"
#include <vector>

using namespace std;

template <typename T>
class MatrixNumerical : public MatrixBase<T> {
    public:
        MatrixNumerical();
        MatrixNumerical(size_t n, T type = T());
        MatrixNumerical(size_t r, size_t c, T type = T());
        MatrixNumerical(const MatrixBase<T>& base);

        T getDeterminant() const; 

};

#endif