#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  string sentence;
  cout<<"Enter a sentence:";
  getline (cin,sentence);
  cout<<endl;
  for(int i=0;i<sentence.length();i++)
  for(int j=65;j<=90;j++)
  { if(sentence[i]==(char)j)
    {sentence[i]=(char)j+32;}
    else if(sentence[i]==(char)j+32)
    {sentence[i]=(char)j;}
  }
    cout<<sentence;
    return 0;
}