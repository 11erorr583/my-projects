#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int bn;
  int dn=0;
  cout<<"enter the binary number";
  cin>>bn;
 int n=0;
while(bn>0)
{ int ln=bn%10;
  int f=pow(2,n);
 int m=ln*f;
n++; 
dn+=m;
bn=bn/10;
}
cout<<dn;
return 0;
}