//a comapany decides to give bonus to all its employe on diwali. a five per cent bonus on salary page no.88 rematharega
#include<iostream>
using namespace std;
int main()
{
  char ch;
float sal, bonus,amt_to_be_paid;
cout<<"\n enter the sex of the employee (m or f):";
cin>>ch;
cout<<"\n enter the salary of the employee:";
cin>>sal;
if(ch == 'm')
{
  bonus = 0.05*sal;

}
else
{
  bonus = 0.10*sal;

}
if(sal < 10000)
{
  bonus = 0.20*sal;

}
amt_to_be_paid = sal+bonus;
cout<<"\n salary= "<<sal;
cout<<"\n bonus="<<bonus;
cout<<"\n ******************************************************";
cout<<"\n Amount to be paid :"<<amt_to_be_paid;

}
