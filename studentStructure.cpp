#include<iostream>
using namespace std;

int main(){
struct studentRecord{
   int id;
   int credit;
   float cgpa;
};

studentRecord x[10];
x[0] = {1, 50, 3.75};
x[1] = {2, 70, 2.75};
x[2] = {3, 40, 2.95};
x[3]= {4, 52, 3.55};
x[4]= {5, 35, 3.79};
x[5] = {6, 66, 3.62};
x[6] = {7, 73, 3.55};
x[7] = {8, 81, 3.91};
x[8] = {9, 41, 3.80};
x[9] = {10, 50, 3.11};
cout<<"Students Id for CGPA 3.75+"<<endl;
for(int i=0; i<10; i++){
    if(x[i].cgpa>3.75){
        cout<<x[i].id<<endl;
    }
}
cout<<"Students Id for credit completed 50+"<<endl;
for(int i=0; i<10; i++){
    if(x[i].credit>50){
        cout<<x[i].id<<endl;
    }
}
}
