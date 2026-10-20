#include "matrix_base.h"
#include <iostream>

MatrixBase::MatrixBase():
rows(0),
cols(0)
{
}

MatrixBase::MatrixBase(size_t n):
rows(n),
cols(n)
{
}

MatrixBase::MatrixBase(size_t r, size_t c):
rows(r),
cols(c)
{
}


void MatrixBase::display() {
    cout << "test" << endl;
}

int MatrixBase::getElement() const {
    return 0
}

void MatrixBase::addElement() {

}

size_t MatrixBase::getCols() const {
    return cols;
}
size_t MatrixBase::getRows() const {
    return rows;
}
