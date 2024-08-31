#include<iostream>
using namespace std;
int main()
{ int n,i=0;
  int reverse[i];
 cout<<"enter any number";
cin>>n;
while(!(n==0))
{ int ld=n%10;
  reverse[i]=ld;
 n=n/10;
i++;
}
for(int j=0;j<i;j++)
{ cout<<reverse[j];
}
return 0;
}