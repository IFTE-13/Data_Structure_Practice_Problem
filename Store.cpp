#include<iostream>
#include <stdlib.h>
using namespace std;

struct product{
    int productId;
    float productPrice;
    int productQuantity;
};


void insertproduct(product);
void displayAllproduct();
void displayOneproduct();

int main(){



    product item1[51];



    item1[1] = {1, 70, 27};
    item1[2] = {2, 40, 29};
    item1[3] = {3, 52, 35};
    item1[4] = {4, 35, 37};
    item1[5] = {5, 66, 36};
    item1[6] = {6, 73, 35};
    item1[7] = {7, 81, 39};
    item1[8] = {8, 41, 38};
    item1[9] = {9, 50, 31};
    item1[10] = {10, 50, 37};
    item1[11] = {11, 70, 27};
    item1[12] = {12, 40, 29};
    item1[13] = {13, 52, 35};
    item1[14] = {14, 35, 37};
    item1[15] = {15, 66, 36};
    item1[16] = {16, 73, 35};
    item1[17] = {17, 81, 39};
    item1[18] = {18, 41, 38};
    item1[19] = {19, 50, 31};
    item1[20] = {20, 50, 37};
    item1[21] = {21, 70, 27};
    item1[22] = {22, 40, 29};
    item1[23] = {23, 52, 35};
    item1[24] = {24, 35, 37};
    item1[25] = {25, 66, 36};
    item1[26] = {26, 73, 35};
    item1[27] = {27, 81, 39};
    item1[28] = {28, 41, 38};
    item1[29] = {29, 50, 31};
    item1[30] = {30, 50, 37};
    item1[31] = {31, 70, 27};
    item1[32] = {32, 40, 29};
    item1[33] = {33, 52, 35};
    item1[34] = {34, 35, 37};
    item1[35] = {35, 66, 36};
    item1[36] = {36, 73, 35};
    item1[37] = {37, 81, 39};
    item1[38] = {38, 41, 38};
    item1[39] = {39, 50, 31};
    item1[40] = {40, 50, 37};
    item1[41] = {41, 70, 27};
    item1[42] = {42, 40, 29};
    item1[43] = {43, 52, 35};
    item1[44] = {44, 35, 37};
    item1[45] = {45, 66, 36};
    item1[46] = {46, 73, 35};
    item1[47] = {47, 81, 39};
    item1[48] = {48, 41, 38};
    item1[49] = {49, 50, 37};
    item1[50] = {50, 50, 31};
int input;
cout<<"Welcome To Store"<<endl;
cout<<"****************"<<endl;
cout<<"1.Insert product"<<endl;
cout<<"2.Display All product"<<endl;
cout<<"3.Display Specific product"<<endl;
cout<<"4.Exit"<<endl;



cout<<endl;
cout<<"Selected Option: ";
cin>>input;



if(input == 1){
        product item2;
    cout<<"Enter product Id:       ";
    cin>>item2.productId;
    cout<<"Enter product Price:   $";
    cin>>item2.productPrice;
    cout<<"Enter product Quantity: ";
    cin>>item2.productQuantity;

    insertproduct(item2);

    cout<<endl;
    cout<<"Thank You"<<endl;

}
else if(input == 2){
        displayAllproduct();
        for(int i=1; i<51; i++)
    {
        cout<<"ID      :  "<<item1[i].productId<<endl;
        cout<<"Price   : $"<<item1[i].productPrice<<endl;
        cout<<"Quantity:  "<<item1[i].productQuantity<<endl;
        cout<<"*************"<<endl;
    }

    cout<<"Thank You"<<endl;


 }
else if (input ==3){
    cout<<"Input Product ID: ";
    int id;
    cin>>id;
    displayOneproduct();
    for(int i=0; i<=50; i++)
    {
        if(id == i){
        cout<<"ID      :  "<<item1[i].productId<<endl;
        cout<<"Price   : $"<<item1[i].productPrice<<endl;
        cout<<"Quantity:  "<<item1[i].productQuantity<<endl;
        cout<<"*************"<<endl;
        }
    }
    cout<<"Thank You"<<endl;
}



else if(input ==4){
    cout<<endl;
    cout<<" Exited "<<endl;
    cout<<"Thank You"<<endl;
}



else{
    cout<<"404 Option not Found"<<endl;
    cout<<"Invalid Input"<<endl;
}




}
void insertproduct(product item2){
    cout<<endl;
    cout<<"****************"<<endl;
    cout<<"Inserted Details"<<endl;
    cout<<"ID:       "<<item2.productId<<endl;
    cout<<"Price:   $"<<item2.productPrice<<endl;
    cout<<"Quantity: "<<item2.productQuantity<<endl;
}
void displayAllproduct(){
    cout<<"*******STORE********"<<endl;
    cout<<"*********************"<<endl;
    cout<<"All products Information"<<endl;
    cout<<"*********************"<<endl;
}
void displayOneproduct(){
    cout<<"*****Details****"<<endl;
    cout<<"****************"<<endl;
}
