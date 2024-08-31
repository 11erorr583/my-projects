#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int bn,dn;
  dn=0;
  cout<<"enter the binary number:";
  cin>>bn;
  int bno=bn;
  //finding the total no of digits in binary entered by user
int td=0;
 while(!(bn==0))
{ bn=bn/10;
  td++ ;
}
// code for converting decimal to binary
for(int i=0;i<td;i++)
{ 
  while(!(bno==0))
{int ld=bno%10;
 int k=pow(2,i);
int m=k*ld;
 bno=bno/10;
dn+=m;}
}
cout<<"the decimal of enterd binary is";
cout<<dn;
return 0;
}
