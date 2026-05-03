#include <iostream>
using namespace std;
int printCars(int car[5][5], int rowSize);

main()
{
    const int rowsize = 5;
    const int colsize = 5;
    int cars[rowsize][colsize] = {{10, 7, 12, 10, 4},
                                  {18, 11, 15, 17, 2},
                                  {23, 19, 12, 16, 14},
                                  {7, 12, 16, 0, 2},
                                  {3, 5, 6, 2, 1}};
    int nissantotal = printCars(cars, rowsize);
    cout << "Total nummbers of Nissan cars are :" << nissantotal << endl;
}

int printCars(int cars[5][5], int rowsize)
{
    int total = 0;

    for (int col = 0; col < rowsize; col++)
    {
        total += cars[2][col];
    }

    return total;
}