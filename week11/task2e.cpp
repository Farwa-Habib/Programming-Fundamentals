#include <iostream>
using namespace std;

void transpose(int original[5][5], int transposed[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            transposed[j][i] = original[i][j];
        }
    }
}

int main() {
    int cars[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}
    }; 

    int transposedCars[5][5];
    transpose(cars, transposedCars);

    cout << "Transposed Table:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << transposedCars[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}