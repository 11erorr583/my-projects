//program to find the product of digits of a number
#include<iostream>
using namespace std;
int main()
{ int n;
  cout<<"enter any number";
  cin>>n;
 int product=1;
while(!(n==0))
{ int ld=n%10;
  product*=ld;
  n=n/10;
}
cout<<"the product of digits is";
cout<<product;
return 0;
}