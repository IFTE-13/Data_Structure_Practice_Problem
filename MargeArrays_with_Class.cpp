#include<iostream>
using namespace std;

void ArrayAddition(int i, int k, int merge[100]){
    cout<<"\nThe New Array (Merged Array):\n";
    for(i=0; i<k; i++)
        cout<<merge[i]<<" ";
    cout<<endl;
}

void PrintArray(int i, int k, int merge[100]){
cout<<"The Reverse of Given Array is: ";
    for(int i=(k-1); i>=0; i--){
        cout<<merge[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arrOne[50], arrTwo[50], arrMerge[100];
	int sizeOne, sizeTwo, i, k;
    cout<<"Enter the Size for First Array: ";
    cin>>sizeOne;
    cout<<"Enter "<<sizeOne<<" Elements for First Array: ";
    for(i=0; i<sizeOne; i++)
    {
        cin>>arrOne[i];
        arrMerge[i] = arrOne[i];
    }
    k = i;
    cout<<"\nEnter the Size for Second Array: ";
    cin>>sizeTwo;
    cout<<"Enter "<<sizeTwo<<" Elements for Second Array: ";
    for(i=0; i<sizeTwo; i++)
    {
        cin>>arrTwo[i];
        arrMerge[k] = arrTwo[i];
        k++;
    }
    ArrayAddition(i, k, arrMerge);

    PrintArray(i, k, arrMerge);

    return 0;
}
