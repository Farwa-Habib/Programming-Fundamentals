#include <iostream>
using namespace std;
float calculateBalance(float balance,int years);
int main(){
    float balance;
    int years;
    cout<<"Enter Balance ";
    cin>>balance;
    cout<<"Enter years ";
    cin>>years;
    float updatebalance=calculateBalance(balance,years);
    cout<<"Updated Balance :"<<updatebalance;
    return 0;
}
float calculateBalance(float balance,int years){
    float interestrate=0.0;
    if(balance<10000){
        interestrate=5;
    }
    else if(balance>10000 && balance<50000)
       { interestrate=7;
    }
    else{
        interestrate=10;
    }
    if(years>=3){
        interestrate=interestrate+2;
    }
 balance=balance+((balance*interestrate)/100);
    return balance;
}