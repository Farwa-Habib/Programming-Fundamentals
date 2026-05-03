#include <iostream>
using namespace std;

void displayWorld();
void setGravityStatus(bool status);
void timeTick(int times);

char objects[5][5] = {
    {'-', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'},
    {'-', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '#'},
    {'#', '-', '#', '-', '-'}
};
bool gravity = false;

int main() {
    displayWorld();          
    setGravityStatus(true);   
    timeTick(3);              
    displayWorld();           

    return 0;
}

void displayWorld() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------" << endl;
}

void setGravityStatus(bool status) {
    gravity = status;
}

void timeTick(int times) {
    if (!gravity) return; 

    for (int t = 0; t < times; t++) {

        for (int i = 3; i >= 0; i--) {
            for (int j = 0; j < 5; j++) {
                if (objects[i][j] == '#' && objects[i + 1][j] == '-') {
                    objects[i + 1][j] = '#';
                    objects[i][j] = '-';
                }
            }
        }
    }
}