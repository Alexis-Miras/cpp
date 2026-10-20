#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H

#include <vector>

using namespace std;

class MatrixNumerical {
    private:
        vector<vector<int>> data;
        size_t rows, cols;

    public:
        MatrixNumerical();
        MatrixNumerical(size_t n);
        MatrixNumerical(size_t r, size_t c);
        virtual ~MatrixNumerical() = default;

        int getElement() const;
        void addElement() const;
        int getCols() const;
        int getRows() const;
        void display();

};

#endif