#include<iostream>
#include<cstring>
using namespace std;
int main()
{ char array[50];
   cout<<"now enter the data for character";
  cin.getline(array,50);
 int k=strlen(array);
 for(int i=0;i<k;i++)
{ for(char j='a';j<='z';j++)
   { if(array[i]==j)
     cout<<char(toupper(array[i]));
   }
  for(char m='A';m<='Z';m++)
 { if(array[i]==m)
   { cout<<char(tolower(array[i]));}
  }
}
return 0;
}