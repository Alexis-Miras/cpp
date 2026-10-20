#include "matrix_numerical.h"

template <typename T>
MatrixNumerical<T>::MatrixNumerical(): 
MatrixBase<T>()
{
}

template <typename T>
MatrixNumerical<T>::MatrixNumerical(size_t n, T type): 
MatrixBase<T>(n, type)
{
}

template <typename T>
MatrixNumerical<T>::MatrixNumerical(size_t r, size_t c, T type):
MatrixBase<T>(r, c, type)
{
}

template <typename T>
MatrixNumerical<T>::MatrixNumerical(const MatrixBase<T>& base):
MatrixBase<T>(base)
{
}

template <typename T>
T MatrixNumerical<T>::getDeterminant() const {
    if (this.getRows() != this.getCols()) {
        throw invalid_argument("La matrice doit être carrée (lignes = colonnes).");
    }
    return 0;
}
