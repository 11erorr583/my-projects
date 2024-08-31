#include<iostream>
using namespace std;
int main()
{ int n;
cout<<"enter any number";
cin>>n;
int count;
for(int i=0;i<=9;i++)
{ count=0;
  int no=n;
   while(!(no==0))
  { int ld=no%10;
    if(ld==i)
    { count++;}
   no=no/10;
  }
  cout<<"the frequency of  "<<i<<":"<<count<<endl;
}
return 0;
}