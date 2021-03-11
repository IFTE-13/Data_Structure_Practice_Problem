#include<iostream>
using namespace std;
int main()
{
    int even = 0;
    int odd = 0;
    int i;
    int arr[10] = {12, 32, 43, 1, 54, 53, 15, 64, 3, 13};
    for(i=0; i<=10; i++){
            cout<<arr[i]<<" ";
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"\nTotal even number "<<even<<endl;
    cout<<"Total odd number"<<odd<<endl;
    return 0;
}

