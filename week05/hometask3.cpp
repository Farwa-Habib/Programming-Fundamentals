#include<iostream>
using namespace std;
main(){

    int n,count=0;
    cout<<"Enter number :";
    cin>>n;
    if (n==0){
        count=1;
    }
    else{ 
        if(n<0){
            n=-n;
        }
        for(int i=n; i>0; i=i/10){
        count=count+1;
    
    }
}
    cout<<"Total Number of digits :"<<count;
         return 0;

}