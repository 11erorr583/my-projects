#include<iostream>
using namespace std;
#include<string>
int main()
{ string array[5]={"karachi","sindh","khanpurr","sakkhar","kashmeer"};
   for(int i=0;i<5;i++)
{ if(array[i][0]=='k')
  { cout<<array[i];
  }
}
return 0;
}