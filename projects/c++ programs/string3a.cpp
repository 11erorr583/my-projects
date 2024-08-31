#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{ char s1[50];
  cout<<"enter the elements of an array"; 
 cin.get(s1,50);
 int k=strlen(s1);
for(int i=0;i<k;i++)
{ for(char j='a';j<='z';j++)
  { if(s1[i]==j)
    { cout<<s1[i];
     }
   }

}
 return 0;
}