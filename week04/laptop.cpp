#include<iostream>
using namespace std;
int main() {
    int salary;
cout<<"Enter the amount of salary:";
cin>>salary;
   int laptopamount;

    laptopamount=50000;

    int advance,month;

    advance =0.5*0.5*salary*6;


    month = laptopamount/(salary/2);

    if (advance>=laptopamount){

        cout<<"Yes you can buy the laptop";
    }
    else{
        cout<<"Months required to buy laptop="<<month;
    }
    return 0;
    }

