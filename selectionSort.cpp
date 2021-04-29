#include<bits/stdc++.h>
using namespace std;

int minimum(int a[],int n, int k, int place)
{
    place = k;
    int min=a[k];
    for(int i=k;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            place=i;
        }
    }
    return place;
}
int selection(int a[],int n)
{
    int place=-1,k;
    int x=0;
    for(k=0;k<n-1;k++)
    {
        int place1=minimum(a,n,k,place);
        int replace=a[k];
        a[k]=a[place1];
        a[place1]=replace;
        x++;
    }
    cout<<"The sorted list is:\n";
    for(k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    cout<<"Number of Comparison: "<<x<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n],i;
    cout<<"Enter the array values:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    selection(a,n);
    return 0;
}
