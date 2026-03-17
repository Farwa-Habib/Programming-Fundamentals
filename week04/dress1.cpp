#include<iostream>
using namespace std;
main(){ 
    
    int cost;

    cout<<"Enter the cost of thr dress :";
    cin>>cost;


    if(cost>1500){
    
        cout<<"Buy the dress"<<endl;
    }
    if(cost<1500){
        cout<<"Do not buy the dress . ";
    }    
}