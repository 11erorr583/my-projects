#include<iostream>
using namespace std;
int main()
{ int n ;
  cout<<"enter the user number";
  cin>>n;
 int nd=0;
while(!(n==0))
{n=n/10;
  nd++;
}
cout<<"the number of digits in the program are";
cout<<nd;
return 0;
}
   