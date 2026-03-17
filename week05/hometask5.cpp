#include<iostream>
using namespace std;
main(){
    int num;
    int sum=0;
    cout<<"Enter a number:";
    cin>>num;

    for(int x=num; x>0; x=x/10){
        sum=sum+(x%10);
        }
    cout<<"Sum of digits:"<<sum;
}