#include <iostream>
#include <cmath>  
#include <iomanip> 

using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    cout << "--- Quadratic Equation (ax^2 + bx + c = 0) ---" << endl;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;

    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Solution : x = " << root1;
        cout << " and x= " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "Solution : x = " << root1 << endl;
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        cout << "Solution :x = " << realPart << " + " << imagPart << "i" ;
        cout << " and x= " << realPart << " - " << imagPart << "i" << endl;
    }

    return 0;
}
