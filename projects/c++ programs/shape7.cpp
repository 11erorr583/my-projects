//program to print reverse hollow parallellogram
#include<iostream>
using namespace std;
#include<string>
int main()
{ int row;
  int col;
 cout<<"enter the number of rows";
cin>>row;
cout<<"enter the number of coloumns";
cin>>col;
string space(col*2,' ');
for(int j=0;j<row;j++)
{cout<<" ";}
for(int i=0;i<col;i++)
{cout<<" *";}
cout<<endl;
for(int k=row;k>0;k--)
{ for(int m=0;m<k;m++)
  { cout<<" ";}
 cout<<"*"<<space<<"*"<<endl;
}
for(int d=0;d<col;d++)
{cout<<" *";}
return 0;
}
 