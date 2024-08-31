#include<iostream>
using namespace std;
int main()
{int un2;
 int secn,un;
  secn=2000;
  int secn2=secn;
 int count=0;
while(!(secn==0))
{secn=secn/10;
  count++;
}
int ld=secn%10;
do
{ cout<<"enter any number";
  cin>>un;
   un2=un;
  int count2=0;
  while(!(un==0))
 { un=un/10;  
   count2++;
}  
int ld2=un%10;
 if((count==count2)&&(ld==ld2)&&!(un2==secn2))
  cout<<"you are near as no of digits and last digit are same";
 else
if(un2==secn2)
cout<<"you have won";
else
cout<<"better luck next time";
}
while(!(un2==secn2));
return 0;
}