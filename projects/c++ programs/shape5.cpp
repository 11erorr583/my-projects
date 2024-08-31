//program to print shape of 7
#include<iostream>
using namespace std;
int main()
{ int row,col;
  row=5;
col=10;
cout<<"            ";
for(int m=0;m<row;m++)
{ cout<<" *";}
cout<<endl;
for( int k=col;k>0;k--)
{ for(int i=0;i<k;i++)
  { cout<<" ";}
  cout<<"*          *"<<endl;
}
for(int s=0;s<row;s++)
cout<<" *";

return 0;
}  
