//Find Largest Number Using Nested if...else statement
#include<iostream>
using namespace std;
int main()
{
  float a,b,c;
  cout<<"enter three no.";
  cin>>a>>b>>c;
  if(a>=b)
  {
    if(a>=c)
    cout<<"a is largest no."<<a;
    else
    cout<<"c is largest no."<<c;

  }
  else
  {
    if(b>=c)
  cout<<"b is largest no."<<b;
  else
  cout<<"c is largest no. "<<c;
    }
    return 0;
}
