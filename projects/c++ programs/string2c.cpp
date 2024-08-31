#include<iostream>
using namespace std;
#include<string>
#include<cstring>
int main()
{ string array;
  cout<<"enter the elements of an array";
  getline(cin,array);
 int k=array.length();
 for(int i=0;i<k;i++)
{for(int l='A';l<='Z';l++)
  { if(array[i]==l)
    cout<<char(array[i]+32);
   else
if(array[i]==l+32)
 { cout<<char(array[i]-32);}
}
}
return 0;
}
    