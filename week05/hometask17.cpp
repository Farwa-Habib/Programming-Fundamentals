#include<iostream>
using namespace std;
main(){
    int i,j,rows;
    cout<<"Input number of rows:";
    cin>>rows;
    for(i=5;i>=1;i--)
{
    for(j=5;j>=i;j--)
    cout<<j<<" ";
    cout<<endl;
}
}