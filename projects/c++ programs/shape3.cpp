//program to print parallellogram
#include<iostream>
using namespace std;
int main()
{ int row,col;
 row=3;
col=4;
for(int i=0;i<row;i++)
{ for(int j=0;j<i+1;j++)
   {cout<<" ";}
  for(int k=0;k<col;k++)
{cout<<"*";}
cout<<endl;
}
return 0;
}