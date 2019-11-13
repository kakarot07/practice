//Program to check whether an integer is positive, negative or zero
#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"enter a number:";
  cin>>a;
  if(a>0)
  {
    cout<<"u enterd a positive"<<a;
    }
    else if(a<0)
    {
      cout<<"you enterd negative no."<<a;

    }
    else
    {
      cout<<" you enterd 0";

    }
    return 0;

}
