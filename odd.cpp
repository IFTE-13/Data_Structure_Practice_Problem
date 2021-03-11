#include<iostream>
using namespace std;
int main()
{
    int start = 0;
    int stop = 0;
    cout<<"Start value: ";
    cin>>start;
    cout<<"Stop value: ";
    cin>>stop;
    for(int i=start; i<=stop; i++)
    {
        if(i%2 == 1){
            cout<<i<<" ";
        }
    }
    return 0;
}
