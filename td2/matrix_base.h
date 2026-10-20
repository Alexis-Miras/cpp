#ifndef MATRIXBASE_H
#define MATRIXBASE_H

#include <vector>

using namespace std;

template <typename T>
class MatrixBase {
    private:
        size_t rows, cols;
        vector<vector<T>> data;

    public:
        MatrixBase();
        MatrixBase(size_t n, T type = T());
        MatrixBase(size_t r, size_t c, T type = T());
        virtual ~MatrixBase() = default;

        T getElement(size_t r, size_t c) const;
        void addElement(size_t r, size_t c, const T& value);

        size_t getCols() const;
        size_t getRows() const;
        void display() const;

};

#include "matrix_base.cpp"

#endif