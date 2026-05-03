#include <iostream>
using namespace std;

int countIdenticalArrays(int arr[][3], int n) ;
int main() {
    int n;
    cout << "Enter the number of rows for the array: ";
    cin >> n;

    int arr[100][3]; 
    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }

    int result = countIdenticalArrays(arr, n);
    cout << "The count of identical rows in the array is: " << result << endl;

    return 0;
}
int countIdenticalArrays(int arr[][3], int n) {
    int totalIdentical = 0;
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < n; j++) {
            if (i == j) continue; 

            if (arr[i][0] == arr[j][0] && arr[i][1] == arr[j][1] && arr[i][2] == arr[j][2]) {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate) {
            totalIdentical++;
        }
    }
    return totalIdentical;
}