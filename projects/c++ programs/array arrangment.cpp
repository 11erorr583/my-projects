#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{ int i;
cout<<"enter the index of an array";
cin>>i;
    
    int arr[i];
    cout<<"enter the elements";
    for(int z=0;z<i;z++)
    {cin>>arr[z];
    }
    cout<<"elements of array are";
    for(int j=i-1;j>=0;j--)
    {cout<<arr[j]<<endl;
    }
    cout<<"the elements of an array with respect to its own values are";
    sort(arr,arr+i,greater<int>());
    for(int l=0;l<i;l++)
    {cout<<arr[l]<<endl;
    }
    int s,j;
      cout<<"enter the indexes of 2d array";
    cin>>s>>j;
    int arr1[s][j];
    cout<<"enter the elements of an array";
    for(int i=0;i<s;i++)
    { for(int k=0;k<j;k++)
      { cin>>arr1[i][k];
      }
    }
    cout<<"the elements of array with respect to index are";
for(int k=s-1;k>=0;k--)
{ for(int m=j-1;m>=0;m--)
  {cout<<arr1[k][m]<<endl;
  }
}
cout<<"the elements of an array with respect to values are";
sort(arr1[0],arr1[0]+s*j,greater<int>());
for(int f=0;f<s;f++)
{for(int l=0;l<j;l++)
  {cout<<arr1[f][l]<<endl;
  }
}
int a,b,c;
cout<<"enter the size of three d array";
cin>>a>>b>>c;
int arr2[a][b][c];
cout<<"now enter the elements of 3 d array";
for(int i=0;i<a;i++)
{for(int k=0;k<b;k++)
  { for(int n=0;n<c;n++)
    { cin>>arr2[i][k][n];
    }
  }
}
cout<<"now the elements of an array in decending order with respect to index are";
for(int x=a-1;x>=0;x--)
{for(int y=b-1;y>=0;y--)
 { for(int z=c-1;z>=0;z--)
   { cout<<arr2[x][y][z]<<endl;
   }
 }
}
cout<<"the elements of three d array with respect to values are";
sort(arr2[0][0],arr2[0][0]+a*b*c);//d,q,w
for(int d=a-1;d>=0;d-- )
{for(int q=b-1;q>=0;q--)
  { for(int w=c-1;w>=0;w--)
    { cout<<arr2[q][d][w]<<endl;
    }
  }
}




return 0;
}