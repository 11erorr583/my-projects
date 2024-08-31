#include<iostream>
using namespace std;
int i,j,n,k;//i and j are the indexes of arr1 ans arr2 while n and k are their sizes
bool ifareequal(int arr1[],int arr2[],int n,int k)//this function compares each elements of array and also takes the count element equal to the size of array
{ int count=0;
  for(i=0;i<n;i++)
  { for(j=0;j<k;j++)
    { if(arr1[i]==arr2[j])
      {count++;
      }
    }
  }
  
  if((count==n)&&(count==k))
  {return true;}
  else
  return false;
}
int main()
{ cout<<"enter the size of arr1";
   cin>>n;
   cout<<"enter the size of arr2";
   cin>>k;
   int arr1[n];
   int arr2[k];
   cout<<"now ! enter the elements of first array";
   for(i=0;i<n;i++)
  {cout<<"enter the elements of array for index"<<i<<endl;
   cin>>arr1[i];
  }
  cout<<"enter the elements foe arr2[k]"<<endl;
  for(j=0;j<k;j++)
  {cout<<"the elements of second array for index"<<j<<endl;
   cin>>arr2[j];
  }
if(  ifareequal(arr1,arr2,n,k) )
cout<<"the two arrays are equal";
else
cout<<"the two arrays are not equal";
return 0;
}