#include <iostream>
using namespace std;
main(){

int number;
cout<<"Enter the number to check frequency :"<<endl;
cin>>number;

int digit;
cout<<"which digit we want to check frequency"<<endl;
cin>>digit;

int count=0;
while(number>0){

int lastdigit=number%10;
if(lastdigit==digit)
{
    count++;
}
number=number/10;
}

cout<<"Frequency of  "<<digit<<" is :"<<count<<endl;
}