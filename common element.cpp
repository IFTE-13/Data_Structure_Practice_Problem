#include <iostream>
using namespace std;
int main(){

	int num1[6] = {1, 4, 6, 3, 6, 9};
	int num2[6] = {5, 3, 7, 1, 2, 6};

    int j = 0;
	cout<<"common elements"<<endl;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++){
			if (num1[i] == num2[j])
			{
			cout<<num1[i]<<endl;
			j++;

			}
		}
	}
		return 0;
}
