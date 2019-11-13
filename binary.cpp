#include<iostream>
using namespace std;
int main()
{
    int n,a,i,j,k,o,r,F,L,middle;
    int arr[100];
    cout<<"Please enter the number of elements you wanna insert" <<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(o=0;o<n;o++)
    {
    for(j=0;j<n;j++)
    {
        if(arr[j]>arr[j+1])
        {
            a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
        }
    }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k];
    }

    cout<<"Please enter the element you wanna search"<<endl;
    cin>>r;
    F=0;
    L=n-1;
    middle = (F+1)/2;
    while(F<=L)
    {
        if(arr[middle]<r)
        {
            F= middle + 1;
        }
        else if(arr[middle]==r)
        {
            cout<< "Ur location is :"<<middle;

        }
        else
        {
            L= middle - 1;
        }
        middle= (F+L)/2;
    }

        if(F>L)
        {
            cout<<"Not possible";
        }


    return 0;

}
