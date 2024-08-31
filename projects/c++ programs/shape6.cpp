//best program to print hollow parallellogram 
#include<iostream>
using namespace std;
#include<string>
int main()
{ int row,col;
cout<<"enter the number of coloumns";
cin>>col;
cout<<"enter the number of rows";
cin>>row;
  


  string space(col*2,' ');
 for(int i=0;i<col;i++)
{ cout<<" *";}
cout<<endl;
for(int k=0;k<row;k++)
{
for(int j=k;j>0;j--)
{ cout<<" ";}
cout<<"*"<<space<<"*"<<endl;}
for(int i=0;i<row;i++)
{cout<<" ";}
for(int i=0;i<col;i++)
{cout<<" *";}
return 0;
}
