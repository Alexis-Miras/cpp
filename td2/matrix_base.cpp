#include "matrix_base.h"
#include <iostream>

template <typename T>
MatrixBase<T>::MatrixBase():
rows(0),
cols(0)
{
}

template <typename T>
MatrixBase<T>::MatrixBase(size_t n, T type):
rows(n),
cols(n),
data(rows, vector<T>(cols, type))
{
}

template <typename T>
MatrixBase<T>::MatrixBase(size_t r, size_t c, T type):
rows(r),
cols(c),
data(r, vector<T>(c, type))
{
}

template <typename T>
void MatrixBase<T>::display() const {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }
}

template <typename T>
T MatrixBase<T>::getElement(size_t r, size_t c) const {
    if (r >= rows || c >= cols) throw std::out_of_range("Indices hors limites.");
    return data[r][c];
}

template <typename T>
void MatrixBase<T>::addElement(size_t r, size_t c, const T& value) {
    if (r >= rows || c >= cols) throw std::out_of_range("Indices hors limites.");
    data[r][c] = value;
}

template <typename T>
size_t MatrixBase<T>::getCols() const {
    return cols;
}

template <typename T>
size_t MatrixBase<T>::getRows() const {
    return rows;
}
