#include <iostream>
#include "matrix.hpp"
#include <vector>

int main() {
    matrix a = matrix(3, 10);
    cout << "//////////////////" << endl;
    a.setValue(1, 4);
    return 0;
}
