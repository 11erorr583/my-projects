#include<string>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{ char s1[50];
cout<<"enter the data for string";
cin.getline(s1,50);
int k=strlen(s1);
for(int j=0;j<k;j++)
{for(char i='a';i<='z';i++)
{if(s1[j]==i)
  { cout<<s1[j];}
}
}
return 0;
}
