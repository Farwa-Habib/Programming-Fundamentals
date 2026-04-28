#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float distance, angle, result, radians;
    cout << "Enter  the distance from the base of the tree (in feets) :";
    cin >> distance;
    cout << "Enter the angle of elevation (in degrees) :";
    cin >> angle;
    radians = (angle * 3.14159) / 180;
    result = distance * tan(radians);

    cout << "The height of the tree is : " << result << "feet .";

    return 0;
}