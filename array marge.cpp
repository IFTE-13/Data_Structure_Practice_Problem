#include<iostream>
using namespace std;
int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[8] = {1,2,3,4,5,6,7,8};
    int arrMerge[50];
	int sizeOne = 5;
	int sizeTwo = 8;
	int i, k;

    for(i=0; i<sizeOne; i++)
    {
        arrMerge[i] = arr1[i];
    }
    k = i;

    for(i=0; i<sizeTwo; i++)
    {
        arrMerge[k] = arr2[i];
        k++;
    }
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<arrMerge[i]<<" ";
    cout<<endl;

    cout<<"The Reverse of Given Array is: "<<endl;
    for(int z=k-1; z>=0; z--){
        cout<<arrMerge[z]<<" ";
    }
    return 0;
}
