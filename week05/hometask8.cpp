#include<iostream>
using namespace std;
main(){
    int age,toyprice,machineprice;
    cout<<"Enter Lilly's age : ";
    cin>>age;

    cout<<"Enter machine price :";
    cin>>machineprice;

    cout<<"Enter toy price :";
    cin>>toyprice;

    int moneysaved=0;
    int giftsmoney=10;
    int toysnumber=0;

    for(int i=1;i<=age;i++){
        if(i%2==0){
            moneysaved=moneysaved+giftsmoney;
            moneysaved=moneysaved-1;
            giftsmoney=giftsmoney+10;
        }
        else{
            toysnumber=toysnumber+1;
        }
    }
moneysaved=moneysaved+(toysnumber*toyprice);

if(moneysaved>=machineprice){
    cout<<"Yes ! "<<(moneysaved-machineprice)<<endl;
    }else{
        cout<<"no ! "<<(machineprice-moneysaved)<<endl;
    }

}