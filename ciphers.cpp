#include <iostream>
using namespace std;

void myfnc(string str, int k){
    cout<<"Given String: "<<str<<endl;
 for( int i = k; i < str.length(); i++)
   {
       if(str[i] != '\0'){
        str[i] = str[i] + 2;
        i = i+k;
       }
   }

cout << "\nCiphered string: " << str << endl;
}

int main()
{
   int k = 2;
   char str[100] = "I am a student";

    myfnc(str, k);

   return 0;
}
