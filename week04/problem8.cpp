#include<iostream>
using namespace std;
main(){
    int number;
    cout<<"Enter number [0....100]:";
    cin>>number;

    int num01;
    num01=number%10;

    string n1;
    n1 = "";
    string n2;
    n2 = "";

    

    if(number==0){n1="zero";}
   else if(num01==1){n1="one";}
   else if(num01==2){n1="two";}
   else if(num01==3){n1="three";}
   else if(num01==4){n1="four";}
   else if(num01==5){n1="five";}
   else if(num01==6){n1="six";}
   else if(num01==7){n1="seven";}
   else if(num01==8){n1="eight";}
   else if(num01==9){n1="nine";}

    if(number==10){n1="ten";}
    if(number==11){n1="eleven";} 
    if(number==12){n1="twelve";}
    if(number==13){n1="thirteen";}
    if(number==14){n1="fourteen";}
    if(number==15){n1="fifteen";}
    if(number==16){n1="sixteen";}
    if(number==17){n1="seventeen";}
    if(number==18){n1="eighteen";}
    if(number==19){n1="ninteen";}

    if(number>=20){n2="twenty";}
   if(number>=30){n2="thirty";}
   if(number>=40){n2="forty";}
   if(number>=50){n2="fifty";}
    if(number>=60){n2="sixty";}
    if(number>=70){n2="seventy";}
    if(number>=80){n2="eighty";}
    if(number>=90){n2="ninty";}
    if(number>=100){n2="one hundred";}
    

    cout<<n2<<" "<<n1;


    }

    
