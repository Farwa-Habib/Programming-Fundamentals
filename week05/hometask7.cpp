#include <iostream>
using namespace std;
main(){
int n;
    cout<<"Enter number count:";
    cin >> n;

    float count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    for (int i = 0; i < n; i++)
    {
        int value;
        cout<< "Enter a number :";
        cin >> value;
        if (value < 200)
        {
            count1++;
        }
        else if (value < 400)
        {
            count2++;
        }
        else if (value < 600)
        {
            count3++;
        }
        else if (value < 800)
        {
            count4++;
        }
        else
        {
            count5++;
        }
    }
    cout << (count1 * 100.0 / n) << "%" << endl;
    cout << (count2 * 100.0 / n) << "%" << endl;
    cout << (count3 * 100.0 / n) << "%" << endl;
    cout << (count4 * 100.0 / n) << "%" << endl;
    cout << (count5 * 100.0 / n) << "%" << endl;
}