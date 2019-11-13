//Find Largest Number Using if Statement
#include<iostream>
using namespace std;
int main()
{
  float a,b,c;
  cout<<"enter a no.";
  cin>>a>>b>>c;


if(a>=b && a>=c)
{
  cout<<a<<" largest no. is a";
}
if(b>=a && b>=c)
{
  cout<<b<<" largest no. is b";
}
if(c>=a && c>=b)
{
  cout<<c<<" largest no. is c";
}
}
