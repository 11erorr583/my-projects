#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main()
{ string ar1,ar2;
   //concatenating the string without using any library
  cout<<"now enter the elements of an array";
 getline(cin,ar1);
cout<<"now enter the data for second array";
getline(cin,ar2);
string ar3=ar1+ar2;
cout<<"the concatenatted string without using library is";
 cout<<ar3;
cout<<"the concatenatted string by using library is";
char ar4[50];
cout<<"now enter the data for another string";
cin.getline(ar4,50);
char ar5[50];
cin.getline(ar5,50);
string ar6=strcat(ar4,ar5);
cout<<ar6;
return 0;
}