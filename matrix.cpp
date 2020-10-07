//
// Created by Max on 2020-10-06.
//

#include <iomanip>
#include "matrix.hpp"

matrix::matrix() :  rows(1), columns(1) {
    cout << 0.0 << endl;
}

matrix::matrix(int n) : rows(n), columns(n) {
    cout << setprecision(1) << std::fixed;
    for (int i = 0; i < rows; i++) {
        if (i > 0) {
            cout << endl;
        }
        for (int j = 0; j < columns; j++) {
            cout << 0.0 << " ";
        }
    }
}

//matrix::matrix(int r, int c) : rows(r), columns(c) {
//    cout << setprecision(1) << std::fixed;
//    for (int i = 0; i < rows; i++) {
//        if (i > 0) {
//            cout << endl;
//        }
//        for (int j = 0; j < columns; j++) {
//            cout << 0.0 << " ";
//        }
//    }
//}

matrix::matrix(int r, int c) : rows(r), columns(c) {
    matArr = new int*[rows];
    for(int i = 0; i < rows; i++) {
        matArr[i] = new int[columns];
    }
    for  (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matArr[i][j] = 0;
            cout << matArr[i][j] << " ";
        }
        cout << endl;
    }
}

void matrix::setValue(int r, int c) {
    matArr[r][c] = 1;
    for  (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matArr[i][j] << " ";
        }
        cout << endl;
    }
}