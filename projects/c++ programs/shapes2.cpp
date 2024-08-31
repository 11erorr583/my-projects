//program to print reverse parallellogram
#include<iostream>
using namespace std;
int main()
{ int row,col;
  row=3;
  col=4;
 for(int i=0;i<row;i++)//loop for rows
{ for(int j=0;j<=i-1;j++)//loop for spaces
  { cout<<"  ";}
  for(int k=0;k<col;k++)//loop for coloumns
 { cout<<"@";}
cout<<endl;
}
return 0;
}