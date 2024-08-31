#include<iostream>
#include<cstring>
using namespace std;
string strcomp(string  a,string b,string c="0",string d="0" )
{ int a1,b1,c1,d1;
  a1=strlen(a.c_str());
  b1=strlen(b.c_str());
  c1=strlen(c.c_str());
  d1=strlen(d.c_str());
int greatest=(a1>b1)?((a1>c1)?a1:c1):((b1>c1)?b1:c1);
 int longest;
 if(d1>greatest)
 return d;
 else
 if(greatest==a1)
 return a;
 else
 if(greatest==b1)
 return b;
 else
 return c;
 
}
int main()
{ string a2,b2,c2,d2;
  cout<<"enter the string "<<endl;
  getline(cin,a2);
  cout<<"enter another string"<<endl;
  getline(cin,b2);
  cout<<"enter third string"<<endl;
  getline(cin,c2);
  cout<<"enter the fourthj string"<<endl;
  getline(cin,d2);
 string r= strcomp(a2,b2,c2,d2);
 cout<<r<<"is greatest"<<endl;
  cout<<"the compparison of first two string is"<<endl;
 string m= strcomp(a2,b2);
 cout<<m<<"is greater"<<endl;
  cout<<"the comparison of last two strings is"<<endl;
 string h= strcomp(c2,d2);
  cout<<h<<"is greater"<<endl;
  return 0;
}