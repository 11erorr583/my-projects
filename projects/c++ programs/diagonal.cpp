#include<iostream>
using namespace std;
int main()
{ int array[3][3];
  cout<<"now enter the elements of an array";
 for(int i=0;i<3;i++)
{  for(int j=0;j<3;j++)
    { cout<<"the value of an array for size: array["<<i+1<<"]"<<"["<<j+1<<"]";
       cin>>array[i][j];
       cout<<endl;
      }
}
int sum=0;
cout<<"the right  diagonal sum of an array is";
 for(int i=0;i<3;i++)
{ for(int j=0;j<3;j++)
   {if(i==j)
      {sum+=array[i][j];
       }

   }
}
 cout<<sum;
cout<<endl;
int sum2=0;
cout<<"the left diagonal sum of an array if";
for(int i=0;i<3;i++)
{ sum2+=array[i][3-i-1];
}
cout<<sum2;
return 0;
}
