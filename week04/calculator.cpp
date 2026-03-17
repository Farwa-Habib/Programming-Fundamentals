#include <iostream>
using namespace std;

 int main(){
    cout<<"Welcome to the calculator"<<endl;

 int firstnumber;
    cout<<"Enter the first number :"<<endl;
    cin>>firstnumber;

    char opere;
    cout<<"Enter the operator :"<<endl;
    cin>>opere;
int secondnumber;
cout<<"Enter the second number:"<<endl;
cin>> secondnumber;

int calculator;
if(opere=='+'){
    calculator = firstnumber-secondnumber;
}
if(opere=='-'){
    calculator = firstnumber + secondnumber;

}
if(opere=='/'){
    calculator = firstnumber * secondnumber;

}
if(opere=='*'){
    calculator = firstnumber / secondnumber;
}
cout<<firstnumber<<opere<<secondnumber<< "=" <<calculator;




}
    
