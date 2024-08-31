#include<iostream>
using namespace std;
double hottest(double array[],int n)
{ double hot=0;
   for(int l=0;l<n;l++)
   { if(array[l]>hot)
     { hot=array[l];
       }
    }
  return hot;
}
int main()
{double karachi[7];
  cout<<"enter the tempratura in a week of karachi in celcius";
  for(int m=0;m<7;m++)
{ cin>>karachi[m];}
 double lahore[7];
 cout<<"enter the temprature in a week of lahore in celcius";
 for(int k=0;k<7;k++)
 {cin>>lahore[k];}
cout<<"the hottest temprature in karachi is\n";
 double hotter=hottest(karachi,7);
cout<<hotter;
cout<<"the hottest temprature in lahore is\n";
double  hotter2=hottest(lahore,7);
cout<<hotter2;
return 0;
}
