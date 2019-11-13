//wap to enter any character.if the enetred char is in lower case,convert it into upper case. if it is alower case char. then convert it into pper case.
#include<iostream>
using namespace std;
int main()
{
char a;
cout<<"enter any char:";
cin>>a;
if(a>='A' && a<='Z')
{
  a=a+32;
  cout<<"\n the enetred char was in upper case in lower case. in lower case it is :"<<a;

}
else
{
  a=a-32;
  cout<<"the enterd char was in lower case. in upper case it is:"<<a;
}
return 0;

}
