#include <iostream>
#include <string>
using namespace std;

string fire(char board[5][5], string coord);

int main()
{

    char board[5][5] = {
        {'.', '.', '.', '*', '.'},
        {'.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '.', '.', '.'}};

    string inputCoord;

    cout << "Enter coordinate to fire torpedo(e.g., A1, B3, E5): ";
    cin >> inputCoord;

    string result = fire(board, inputCoord);
    cout << "Result : " << result << endl;

    return 0;
}
string fire(char board[5][5], string coord)
{

    int row = coord[0] - 'A';
    int col = coord[1] - '1';

    if (row < 0 || row >= 5 || col < 0 || col >= 5)
    {
        return "Out of bounds";
    }

    if (board[row][col] == '*')
    {
        return "BOOM";
    }
    else
    {
        return "splash";
    }
}