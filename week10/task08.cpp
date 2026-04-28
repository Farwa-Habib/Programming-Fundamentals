#include <iostream>
#include <string>
using namespace std;
string OddishorEvenish(int number)
{

    int sum = 0;
    int remaning = number;
    while (remaning > 0)
    {
        sum += remaning % 10;
        remaning = remaning / 10;
    }
    if (sum % 2 == 0)
    {
        return "evenish";
    }
    else
    {
        return "Oddish";
    }
}
int main()
{
    int number;
    cout << "enter a  5-digit number : ";
    cin >> number;
    cout << OddishorEvenish(number);
}
