#include <iostream>
using namespace std;
int main()
{
int num[15] = {1, 4, 6, 3, 6, 9, 4, 6, 3, 8, 9, 8, 7, 1, 6};
cout<<"Unique array"<<endl;
for (int i = 0; i < 15; i++)
{
    int j;
    for (j = 0; j < i ; j++)
        {
			if (num[i] == num[j])
			{
                break;
			}
        }
    if(i==j)
        {
            cout<<num[i]<<" ";
        }
}
	return 0;
}

