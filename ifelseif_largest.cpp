//Find Largest Number Using if...else Statement
#include<iostream>
using namespace std;
int main()
{
  float a,b,c;
  cout<<"enter three no.";
  cin>>a>>b>>c;
  if(a>=b&&a>=c)
{
    cout<<"largest no. is a:"<<a;
}
  else if(b>=a&&b>=c)
{
    cout<<"largest no. is b:"<<b;
}
  else
{  cout<<"largest no. is c:"<<c;
}
}
