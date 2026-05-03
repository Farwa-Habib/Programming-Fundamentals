#include <iostream>
#include <string>
using namespace std;

int Colorsum(int cars[5][5], int col)
{
    int total = 0;
    for (int row = 0; row < 5; row++)
    {
        total += cars[row][col];
    }
    return total;
}

int main()
{
    int matrix[5][5] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};

    string userColor;
    int colorIdx = -1;

    cout << "Enter color name (Red, Black, Brown, Blue, Gray): ";
    cin >> userColor;

    if (userColor == "red")
        colorIdx = 0;
    else if (userColor == "black")
        colorIdx = 1;
    else if (userColor == "brown")
        colorIdx = 2;
    else if (userColor == "blue")
        colorIdx = 3;
    else if (userColor == "gray")
        colorIdx = 4;

    if (colorIdx != -1)
    {
        int result = Colorsum(matrix, colorIdx);
        cout << "Total " << userColor << " cars in all brands: " << result << endl;
    }
    else
    {
        cout << "Invalid color name!" << endl;
    }

    return 0;
}
