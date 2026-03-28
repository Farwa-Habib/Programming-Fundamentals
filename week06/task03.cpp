#include<iostream>
using namespace std;
main(){
    string word;
    cout<<"Enter a word :";
    getline(cin,word);
    
    for(int i=0;i<word.length();i++){
        if(word[i]=='Z'){
            word[i]='a';
        }else{
            word[i]=word[i]+1;
        }
        }
        cout<<"Shift String :"<<word<<endl;
        return 0;
    }