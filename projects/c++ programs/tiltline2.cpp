#include<iostream>
using namespace std;
int main()
{ int line;
  line=10;
 for(int i=line;i>0;i--)
{ for(int j=0;j<i;j++)
  { cout<<" ";}
  cout<<"*";
  cout<<endl;
}
return 0;
}