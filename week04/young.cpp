#include<iostream>
using namespace std;
int main(){
    string firstbrother;
    cout<<"Enter name of first brother :";
    cin>>firstbrother;

    int age;
    cout<<"Enter age of first brother :";
    cin>>age;

    string secondbrother;
    cout<<"Enter name of second brother :";
    cin>>secondbrother;

    int secondage;
    cout<<"Enter age of second brother :";
    cin>>secondage;

    string thirdname;
    cout<<"Enter name of third brother :";
    cin>>thirdname;

    int thirdage;
    cout<<"Enter age of third brother :";
    cin>>thirdage;

    if(age<secondage&&age<thirdage){
        cout<<firstbrother<<" is the youngest";

    } 
    else if (secondage<age && secondage<thirdage)
    cout<<secondbrother<<" is the youngest.";

else
cout<<thirdname<<" is the youngest.";
return 0;
}
