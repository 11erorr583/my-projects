/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main()
{
  string x,y;
  int rn;
  srand(5);
  rn=rand()% 3;
  if(rn==0)
  y="rock";
  else
  if(rn==1)
  y="papper";
  else
  if(rn==2)
  y="scissor";
  cout<<"let's play  is rock , papper ,scissor"<<endl;
  cout<<"your  turn"<<"\t";
  cin>>x;
  
  if(x==y)
  {cout<<"tie";}
  else
  if((x=="rock")&&(y=="papper"))
  {cout<<"computer wins papper covers rock";}
  else 
  if((x=="papper")&&(y=="rock"))
  {cout<<"you win papper covers rock";}
 
  else
  if((x=="scissor")&&(y=="rock"))
  {cout<<"computer win rock breaks scissor";}
  else 
  if((x=="rock")&&(y=="scissor"))
  {cout<<"you win rock breaks scissor";}
  else
  if((x=="papper")&&(y=="scissor"))
  {cout<<"computer win scissor cuts papper";}
  else
  if((x=="scissor")&&(y=="papper"))
  {cout<<"youn  win scissor cuts papper";}
  
 
  
  return 0;
}
  
  
  
  
  
