#include<iostream>
using namespace std;
int main()
{
    int n,  arr[50],  temp;
    int Count =0;
    int compare = 0;
    int c;

    cout<<"Enter the size array = ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<" ***********************************  "<<endl;
    cout<<" Sorting the Array using Bubble Sort  "<<endl;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<(n-1-i); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                Count++;
            }
        }
    }
      cout<<"The New Array is = ";
    for(int i=0; i<n; i++)
        cout<<arr[i] <<" ";
        cout<<"\nThe Count = "<<Count;

    cout<<endl;
    return 0;
}
