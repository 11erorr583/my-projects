//program to print hollow rectangle
#include<iostream>
#include<string>
using namespace std;
int main()
{ int row,col;
  row=10;
  col=20;
 string  shape(col*2,' ');
 for(int i=0;i<col;i++)
{cout<<" *";}
cout<<endl;
for(int k=0;k<row;k++)
{cout<<"*"<<shape<<"*"<<endl;}
for(int h=0;h<col;h++)
{cout<<" *";}
return 0;
}