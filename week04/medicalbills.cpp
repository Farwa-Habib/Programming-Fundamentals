#include <iostream>
using namespace std;
main(){
   int bill,discount;
   cout<<"Enter your bill :";
   cin>>bill; 
   
   if(bill<=5000){
    
    discount=(bill*5)/100;

   }
   else{
    
    discount =(bill*10)/100;
   }
int finalbill;
finalbill=bill-discount;
cout<<"Your discopunted bill is : "<<finalbill;
   
   

}