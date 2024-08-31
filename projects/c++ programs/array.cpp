#include<iostream>
using namespace std;
int main()
{ int array[10];
  cout<<"enter the elements of an array";
 for(int i=0;i<10;i++)
{ cin>>array[i];
}
 int n=0;
cout<<"the most occuring element of an array is";
for(int i=0;i<10;i++)
{ if(array[i]==array[i+1])
   {cout<<array[i]<<endl;;
    n++;
    }
 }
cout<<"the number of occurance of an element is";
cout<<n;
return 0;
}