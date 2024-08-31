//program to check the number is amstrong
#include<iostream>
using namespace std;
int power(int num,int exp)
{int result=1;
for(int i=0;i<exp;i++)
  {
   result=result*num;}
return result;
}
int td(int no)
{ int n=0;
  while(!(no==0))
 { no=no/10;
   n++;
      }
return n;
}
int main()
{ int k;
  cout<<"enter any number";
  cin>>k;
 int f=td(k);
 int l=k;
 int an=0;
while(!(l==0))
{ int ld=l%10;
  int p=power(ld,f);
  an+=p;
  l=l/10;
}
if(an==k)
cout<<"it's amstrong";
else
  cout<<"it is not amstrong";
return 0;
}