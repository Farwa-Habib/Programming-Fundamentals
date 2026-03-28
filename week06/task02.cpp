#include<iostream>
using namespace std;
main(){
    char word[100];
    cout<<"Enter a string :";
    cin>>word;

    int lenght=0;
    while(word[lenght]!='\0'){
        lenght++;
    }
    cout<<"Reversed String :";
    for(int i=lenght-1;i>=0;i--){
        cout<<word[i];
    }
    cout<<endl;
}