//program to print reverse parallelogram
#include<iostream>
using namespace std;
int main()
{ int row,col;
 row=5;
col=6;
for(int i=0;i<row;i++)
{ for(int j=row;j>i;j--)
   { cout<<" ";}
  for(int k=0;k<col;k++)
 { cout<<"*";}
cout<<endl;
}
return 0;
}