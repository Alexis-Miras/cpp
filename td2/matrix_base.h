#ifndef MATRIXBASE_H
#define MATRIXBASE_H

#include <vector>

using namespace std;

class MatrixBase {
    private:
        vector<vector<int>> data;
        size_t rows, cols;

    public:
        MatrixBase();
        MatrixBase(size_t n);
        MatrixBase(size_t r, size_t c);
        virtual ~MatrixBase() = default;

        int getElement() const;
        void addElement();
        size_t getCols() const;
        size_t getRows() const;
        void display();

};

#endif