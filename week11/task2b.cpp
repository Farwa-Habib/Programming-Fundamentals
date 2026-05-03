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
   int redtotal= printCars(cars, rowsize);
   cout<<"Total nummbers of Red cars are :"<<redtotal<<endl;
}

int printCars(int cars[5][5], int rowsize)
{
     int total=0;
    for (int row = 0; row < rowsize; row++)
    {
        total+=cars[row][0];
    }
    return total;
}