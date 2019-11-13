#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int d, count=0;
    cout<<"enter the element you want to search\n";
    cin>>d;
    for(int i=0;i<n;i++)
    {
     if(arr[i]==d)
     {
         cout<<"element found "<<d<<" at index "<<i;
         count=1;
         break;
     }
    else
    {
        count=0;
    }
    }
    if(count==0)
    {
        cout<<"not found";
    }
    return 0;
}
