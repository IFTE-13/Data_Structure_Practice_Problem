#include<iostream>
using namespace std;

int main()
{
   int n =7;

{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (2 * n); j++)
        {
            if (i < j)
                cout << " ";
            else
                cout << "*";
            if (i <= ((2 * n) - j))
                cout << " ";
            else
                cout << "*";
        }
        cout << "\n";
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (2 * n); j++)
        {
            if (i > (n - j + 1))
                cout <<" ";
            else
                cout <<"*";
            if ((i + n) > j)
                cout << " ";
            else
                cout << "*";
        }
        cout << "\n";
    }
}

return 0;

}
