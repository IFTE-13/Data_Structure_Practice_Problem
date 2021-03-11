#include<iostream>
using namespace std;

int main(){
struct employeeRecord{
   int id;
   int salary;
   string dept;
};

employeeRecord x[10];
x[0] = {1, 50000, "HR"};
x[1] = {2, 70000, "COM"};
x[2] = {3, 40000, "MG"};
x[3]= {4, 22000, "HR"};
x[4]= {5, 35000, "HR"};
x[5] = {6, 66000, "HR"};
x[6] = {7, 73000, "COM"};
x[7] = {8, 51000, "HR"};
x[8] = {9, 21000, "MG"};
x[9] = {10, 20000, "HR"};
cout<<"Employee Salary more then 30000 and Works in HR dept. - "<<endl;
for(int i=0; i<10; i++){
    if(x[i].salary>30000 && x[i].dept == "HR"){
        cout<<"EMPLOYEE ID: "<<x[i].id<<" Salary: "<<x[i].salary<<endl;
    }
}

}

