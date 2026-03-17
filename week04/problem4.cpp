#include <iostream>
using namespace std;
main(){
    int redroses;
    cout<<"Enter the number of red rose :";
    cin>>redroses;

    int whiteroses;
    cout<<"Enter the number of white rose :";
    cin>>whiteroses;

    int tulips;
    cout<<"Enter the number of tulips :";
    cin>>tulips;

float redroseprice;
redroseprice=2.00*redroses;
float whiterosesprice;
whiterosesprice=4.10*whiteroses;
float tulipsprices;
tulipsprices=2.50*tulips;
float sum;
sum=redroseprice+whiterosesprice+tulipsprices;
if(sum>200){
    float discount;
    discount=(sum*20)/100;
    float totaly;
    totaly=sum-discount;

cout<<"Original Price : $ "<<sum<<endl;
cout<<"Price after Discount : $ "<<totaly<<endl;
}
}