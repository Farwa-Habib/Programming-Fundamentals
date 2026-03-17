#include<iostream>
using namespace std;
main(){
    int n1=0,n2=1,next;
    int n;
    cout<<"How many numbers of Fibonacci Series you want to print :"<<endl;
    cin>>n;

    for(int i=0 ; i<n; i++){
        if(i==0){
            cout<<n1;
        }
        else if(i==1){
            cout<<","<<n2;
        
        }
        else{
        next = n1 + n2;
        cout<< "," <<next;
        n1=n2;
        n2=next;
}
}
return 0;
}