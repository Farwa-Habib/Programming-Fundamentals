#include<iostream>
using namespace std;
int main(){
    int factor;
    int table=5;

 cout<<"TABLE OF 5 "<<endl;
    
    for(int num=1; num<=10; num=num+1){
        
    factor=table*num;
    
   
    cout<<table<<" * "<<num<<" = "<<factor<<endl;
    }
}