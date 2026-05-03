#include <iostream>
using namespace std;

void largestColumnFirst(int M[3][5]);

int main()
{

    int M[3][5] = {
        {6, 7, 9, 4, 8},
        {3, 2, 7, 4, 1},
        {9, 4, 5, 8, 3}};

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    largestColumnFirst(M);

    cout << "\nMatrix after  Largest Column moved to first"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << M[i][j] << " ";
        cout << endl;
    }

    return 0;
}
void largestColumnFirst(int M[3][5])
{
    int max_sum = -1;
    int largest_col_idx = 0;

    for (int j = 0; j < 5; j++)
    {
        int current_col_sum = 0;
        for (int i = 0; i < 3; i++)
        {
            current_col_sum += M[i][j];
        }

        if (current_col_sum > max_sum)
        {
            max_sum = current_col_sum;
            largest_col_idx = j;
        }
    }

    if (largest_col_idx != 0)
    {
        for (int i = 0; i < 3; i++)
        {
            int temp = M[i][0];
            M[i][0] = M[i][largest_col_idx];
            M[i][largest_col_idx] = temp;
        }
    }
}
