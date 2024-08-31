#include<iostream>
#include<string>
using namespace std;
int main()
{ int row,col;
  row=7;
col=10;
for(int i=0;i<10;i++)
{cout<<" ";}
for(int i=0;i<col;i++)
{cout<<" *";}
for(int i=0;i<row;i++)
{
string line=" *";
line+= string(col," ");
line+= " *";
cout<<line;
}
for(int i=0;i<row;i++)
{cout<<" *";}
return 0;
}
