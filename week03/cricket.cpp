#include <iostream>
using namespace std;
main(){
int wins;
cout<<"Enter the number of wins :";
cin>>wins;
int draws;
cout<<"Enter the number of draws :";
cin>>draws;
int losses;
cout<<"Enter the number of losses  :";
cin>>losses;
int score;
score=(wins*3)+(draws*1)+(losses*0);
cout<<"Pakistan has obtained "<<score<<" in Asia  Cup Tournament.";
}