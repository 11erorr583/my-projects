#include<iostream>
using namespace std;
int main()
{ int dn,bn;
  cout<<"enter the decimal number";
  cin>>dn;
 bn=0;
while(!(dn==0))
{ int rem=dn%2;
  bn=bn*10+rem;  
 dn=dn/2;
}
int original=0;
while(!(bn==0))
{ int ln=bn%10;
  original=original*10+ln;
  bn=bn/10;
}
cout<<original;
return 0;
}