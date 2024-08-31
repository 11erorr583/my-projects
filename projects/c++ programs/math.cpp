#include<iostream>
using namespace std;
int main()
{ int arr[10];
  cout<<"now enter the entities of an array";
  for(int i=0;i<10;i++)
  { cout<<"the entity of arr"<<"["<<i<<"]"<<"is:";
    cin>>arr[i];
  }
  int x;//variable to compute an average
  int sum=0;
  for(int i=0;i<10;i++)
  { sum=sum+arr[i];
  }
  x=sum/10;
  cout<<"the average of entities is";
  cout<<x<<endl;
  cout<<"the entities of an array greater than average are:"<<endl;
 for(int i=0;i<10;i++)
 { if(x<arr[i])
   { cout<<arr[i]<<endl;}
 }
 return 0;
}