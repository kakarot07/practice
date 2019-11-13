#include<iostream>
using namespace std;
class a
{
public:
  int p;
  float q;
  int cube (int num)
{
  p= num*num*num;
  return p;
}
float cube(float numm)
{
  q= numm*numm*numm;
  return q;
}
};
int main()
{
  int n,i;
  float f;
  class a obj;
  cout<<"for integer value enter 1 \n for float value enter 2"<<endl;
  cin>>n;
  if(n==1)
  {
    cout<<"enter an integer number"<<endl;
    cin>>i;
    cout<<obj.cube(i)<<endl;
  }
  else if(n==2)
  {
    cout<<"enter a decima number"<<endl;
    cin>>f;
    cout<<obj.cube(f)<<endl;
  }
}
