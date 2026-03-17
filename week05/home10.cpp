#include<iostream>
using namespace std;
int main(){
    while(true){
        int choice;

        cout<<"\n======SIMPLE CALCULATOR======"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Clear Screen"<<endl;
        cout<<"6.Exit "<<endl;
        cout<<"Enter your choice(1-6) :";
        cin>>choice;
        int n1,n2;
        cout<<"Enter first number :"<<endl;
        cin>>n1;

        cout<<"Enter second number :"<<endl;
        cin>>n2;

        int sum;
        if(choice==1){
            sum=n1+n1;
        }
        else if (choice==2){
            sum=n1-n2;
        }
        else if(choice==3){
            sum=n1*n2;
            
        }
        else if(choice==4){
            sum=n1/n2;
        }
        else if(choice==5){
            
        }
        else if(choice==6){
            cout<<"Exit."<<endl;
       break;
     }else{
        cout<<"Sum :"<<sum<<endl;
     }
    }
    
    return 0;
}