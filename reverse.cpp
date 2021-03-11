#include<iostream>
using namespace std;
int main()
{
    int array[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};
    cout<<"The Reverse of Given Array is: ";
    for(int i=(10-1); i>=0; i--){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}
