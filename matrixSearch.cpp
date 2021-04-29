#include <iostream>
using namespace std;
int main()
{
int arr[3][3]={{4,5,6},{3,2,4},{5,7,8}};
cout<<"Given Matrix :"<<endl;
for(int i=0; i<3; i++)
{
for(int j=0; j<3; j++)
    {
    cout<< 4 * arr[i][j]<<" ";
    }
    cout<<"\n";
    }
int x;
cout<<"Want to search a element? then press 1 or for exit press 2 : ";
cin>>x;
if(x == 1)
    {
    int z;
    int l = -1;
    int l2 = -1;
    cout<<"Enter element To search: ";
    cin>>z;
    z = z/4;
    for(int i=1; i<=3; i++)
        {
        for(int j=1; j<=3; j++)
            {
            if(z == arr[i][j])
            {
                l = i+1;
                l2 = j+1;
                break;
            }

        }

}
if(l != -1 && l2 != -1){
    cout<<z*4<<" Found at "<<l2<<" "<<l;
}

if(l == -1 && l2 ==-1){
    cout<<"Not found"<<endl;
}
}
else if(x == 2)
{
    cout<<"Exited"<<endl;
}
   return 0;
}

