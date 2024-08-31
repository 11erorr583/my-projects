// program to reverse a number entered by user
#include<iostream>
using namespace std;
int main()
{ int no;
  cout<<"enter any number";
  cin>>no;
int reverse=0; 
while(!(no==0))
{ int ld=no%10;
  reverse=reverse*10+ld;
  no=no/10;
}
cout<<"the reverse of a number entered by user is";
cout<<reverse;
return 0;
}