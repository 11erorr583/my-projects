#include<iostream>
using namespace std;
int main()
{ //sorting 1d std::array
  int n;
  cout<<"enter the size of 1d array";
  cin>>n;
  int arr[n];
  //specifing the elements of 1d array by user
  for(int i=0;i<n;i++)
  { cout<<"the element of an array for arr"<<"["<<i<<"]";
     cin>>arr[i];
  }
  //the elements of array in assending order
cout<<"the elements of array are"<<endl;
for(int i=0;i<n;i++)
{
  cout<<arr[i];
}
//elements of array for decending order
cout<<"the elements of array ";
for(int i=n-1;i>=0;i--)
{
 cout<<arr[i];
}
//sorting the 2d array
int r,c;
cout<<endl<<"enter the size of 2d array";
cin>>r>>c;
int arr1[r][c];
cout<<"enter the elements of an array";

for(int i=0;i<r;i++)
{for(int j=0;j<c;j++)
 {cout<<"enter the elements of an array"<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
     cin>>arr1[i][j];
 }
 
}//elements of array in assending order
cout<<"the elements of array are";
for(int i=0;i<r;i++)
{for(int j=0;j<c;j++)
 {cout<<arr1[i][j];
 }
 cout<<endl;
}//elements of array for decending array
cout<<"the elements of array in decending array are";
for(int i=r-1;i>=0;i--)
{for(int j=c-1;j>=0;j--)
 {cout<<arr1[i][j];
 }
}
 return 0;
}










