#include <iostream>
using namespace std;
int factorial(int n);
bool isStrong(int num);
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isStrong(n)) {
        cout << "Strong Number" << endl;
    } else {
        cout << "Not Strong Number" << endl;
    }

    return 0;
}
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;      
        sum += factorial(digit);    
        num = num / 10;            
    }
    return sum == originalNum;
}
