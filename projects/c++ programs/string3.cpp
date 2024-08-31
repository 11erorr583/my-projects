#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main()
{  //program to remove character form the string
      string s1[50];
  cout<<"now enter the elements for string";
 cin.getline(s1,50);
  int j=strlen(s1);
char a;
for(int i=0;i<j;i++)
{ if(s1[i]==a)
   { cout<<s1[i];}
  else
  cout<<" ";
}
return 0;
}