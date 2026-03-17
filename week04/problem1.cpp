#include<iostream>
using namespace std;
main(){
    string country;
    cout<<"Enter the country name :";
    cin>>country;

    int ticketprice;
    cout<<"Enter ticket price in dollars :";
    cin>>ticketprice;

     float discount;
     if(country=="ireland"){
        discount=ticketprice*0.10;
     }else{
        discount=ticketprice*0.05;
    } 
    int totalamount;
     totalamount=ticketprice-discount;
     cout<<"discounted price is : $ "<<totalamount<<endl;


}