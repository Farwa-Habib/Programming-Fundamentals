#include <iostream>
using namespace std;
void printCars(int car[][5], int row,int col);

main()
{
    const int rowsize = 5;
    const int colsize = 5;
    int cars[rowsize][colsize] = {{10, 7, 12, 10, 4},
                                  {18, 11, 15, 17, 2},
                                  {23, 19, 12, 16, 14},
                                  {7, 12, 16, 0, 2},
                                  {3, 5, 6, 2, 1}};
    int row, col;
    cout << "Enter row  number :";
    cin >> row;
    cout << "Enter column number :";
    cin >> col;
    printCars(cars, row, col);
}

void printCars(int cars[][5], int row, int col)
{
    cout << cars[row][col];
}