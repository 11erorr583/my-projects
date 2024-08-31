#include<iostream>
using namespace std;
#include<ctime>
#include<cstdlib>
#include<windows.h>
int ld(int n)
{ int lastdigit;
  lastdigit=n%10;
return lastdigit;
}
int nod(int n)
{ int count=0;
 while(!(n==0))
{ n=n/10;
  count++;
}
return count;
}
int reverse(int n)
{ int r=0;
  int lastdigit;
while(!(n==0))
{ lastdigit=n%10;
  r=r*10+lastdigit;
  n=n/10;
 }
return r;
}
void beep()
{ Beep(523,1000);
  return ;
}
int main()
{ int compno,userno;
  srand(5);
  compno=rand()%51;
  int lastdigit=ld(compno);
  int td=nod(compno);
  int backword=reverse(compno);
 do
{ cout<<"enter the user no";
  cin>>userno;
  int lastdigit2=ld(userno);
 int td2=nod(userno);
 if((lastdigit==lastdigit2)&&(td==td2)&&(!(compno==userno))&&!(backword==userno))
cout<<"you are near as no of digits and last digit is same";
else
if((lastdigit==lastdigit2)&&(td==td2)&&(compno==userno))
{cout<<"you have won";
beep();}
else
if((td==td2)&&(userno==backword))
{cout<<"you have won";
beep();}
else
cout<<"better luck next time";
}
while(!(userno==compno)||!(userno==backword));
return 0;
}