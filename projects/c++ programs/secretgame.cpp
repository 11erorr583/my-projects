#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{ int compno,userno,userno2,reverse=0;
  srand(6);
 compno=rand()%2001;//determines number between 1 and 2000
 int compno2;
compno2=compno;
  int count=0;
  while(!(compno==0))
 { compno=compno/10;
   count++;
} 
int ld;
ld=compno%10;
reverse=0; 
int compno3=compno2;
int lastno;
while(!(compno3==0))
{ lastno= compno3%10;
   reverse=reverse*10+lastno;
  compno3=compno3/10;
}

do
{ cout<<"enter any number";
  cin>>userno;
userno2=userno;
 int ld2=userno%10;
  int count2=0;
  while(!(userno==0))
{ userno%10;
  count2++;
}
if((ld==ld2)&&(count==count2)&&!(compno2==userno2)&&!(reverse==userno2))
cout<<"you are near as no of digit and last digit is same";
else
if((ld==ld2)&&(count==count2)&&!(compno2==userno2)&&(reverse==userno))
cout<<"you have won";
else
if((ld==ld2)&&(count==count2)&&(compno2==userno2))
cout<<"you have won";
else
cout<<"better luck next time";
}
while(!(userno2==compno2));
return 0;
}