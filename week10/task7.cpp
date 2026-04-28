#include <iostream>
using namespace std;
bool IsSymmetrical(int number)
 {
    int firstDigit = number / 100;    
    int lastDigit = number % 10;     
    
    if (firstDigit == lastDigit)
     {
        return true;
    } else {
        return false;
    }
}
int main() 
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;
        if (IsSymmetrical(num)) {
            cout << "The number is symmmetrical ."<< endl;
        } else
         {
            cout << "The number is not symmmetrical ."<< endl;
        }
    return 0;
}
