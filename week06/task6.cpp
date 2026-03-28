#include <iostream>
using namespace std;
main()
{
    int sum = 0;
    float average = 0;
    int number[5] = {1, 2, 3, 4, 5};
    for (int index = 0; index < 5; index = index + 1)
    {
        sum = sum + number[index];
    }
    average = sum / 5;
    cout << "Sum :" << sum << endl;
    cout << "average :"<<average << endl;
}