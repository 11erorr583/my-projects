#include<iostream>
#include<cstring>
using namespace std;
int main()
{ char array[50];
   cout<<"enter the words";
  cin.get(array,50);
 int n=0;
int j=strlen(array);
for(int i=0;i<j;i++)
{if(array[i]=='a')
  {n++;}
}
cout<<"the number of 'a' in an array is";
cout<<n;
return 0;
}