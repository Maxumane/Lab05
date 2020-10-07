//
// Created by Max on 2020-10-06.
//

#ifndef LAB05_MATRIX_HPP
#define LAB05_MATRIX_HPP
#include <iostream>
#include <vector>

using namespace std;

class matrix {
    int rows;
    int columns;
    int** matArr;

public:
    matrix();
    matrix(int n);
    matrix(int r, int c);
    matrix(double formArray[]);
    void setValue(int r, int c);
};
#endif //LAB05_MATRIX_HPP
