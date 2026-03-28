#include <iostream>
using namespace std;
main()
{
  string word, withoutvowel = "";
  cout << "enter a string:";
  getline(cin, word);
  for (int i = 0; word[i] != '\0'; i++)
  {
    if (word[i] != 'a' && word[i] != 'A' && word[i] != 'e' && word[i] != 'E' && word[i] != 'i' && word[i] != 'I' && word[i] != 'o' && word[i] != 'O' && word[i] != 'u' && word[i] != 'U')
    {
      withoutvowel=withoutvowel+ word[i];
    }
  }
  cout <<"String with vowels removed "<< withoutvowel;

}