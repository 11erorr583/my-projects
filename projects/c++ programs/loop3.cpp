//program to find the last and first digit of the number
#include<iostream>
using namespace std;
int main()
{ int no;
cout<<"enter any number";
cin>>no;
int ld=no%10;
cout<<"the last digit of a number is";
cout<<ld;
int fd=0;
int n;
while(!(no==0))
{ n=no%10;
 no=no/10;
}
cout<<"the first digit of number entered by user is";
cout<<n;
return 0;
}