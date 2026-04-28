#include <iostream>
#include <string>

using namespace std;
string capitallettercase(char character);
main()
{
    char character;
    cout<<"Enter a character (A\a) :";
    cin>>character;

    cout<<capitallettercase(character);
return 0;

}
string capitallettercase(char character)
{
if(character=='A')
{
    return"You have entered Capital A";
}
else{
    return"You have entered a small a";
}
}
