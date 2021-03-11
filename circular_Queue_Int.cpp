#include <iostream>
using namespace std;
class myQueue {
int Queue[5];
int rear = -1,Front = -1;
int maxSize = 5;

public:
    myQueue(){
    }
    bool isEmpty()
    {
        if(Front == -1 && rear ==-1){
         return true;
        }
        else {
         return false;
        }
    }

    bool isFull(){
    if((rear+1)%maxSize == Front ){
     return true;
    }
    else{
     return false;
    }
    }

    void enqueue (int x){
    if(isFull()){
     cout<<" Queue Full "<<endl;
     return;
    }
    else if(isEmpty()){
     rear=0;
     Front=0;
     Queue[rear]=x;
     cout<<x <<" inserted in the QUEUE "<<endl;
     return;
    }
    else{
     rear = (rear +1 )% maxSize;
     Queue[rear]=x;
     cout<<x <<" is inserted in the queue "<<endl;
     return;
    }

    }

    void dequeue(){
    int temp;
    if(isEmpty()){
     cout<<" Queue is Empty ! dequeue is impossible "<<endl;
     return;
    }
    else if(rear==Front && Front != -1){
     temp =Queue[Front];
     rear=Front=-1;
     cout<<temp <<" Removed from the Queue"<<endl;
      return;
    }
    else{
     temp=Queue[Front];
     Front=( Front + 1 )% maxSize;
     cout<<temp<<" removed from Queue "<<endl;
     return;
    }
    }

    int FrontElement(){
    cout<<"\nFront = Queue ["<<Front<<"]"<<" = "<<Queue[Front]<<endl;
    }

};

int main()
{
myQueue e1;
e1.enqueue(1);
e1.enqueue(2);
e1.enqueue(3);
e1.enqueue(4);
e1.enqueue(5);

e1.dequeue();
e1.dequeue();
e1.dequeue();

e1.enqueue(6);
e1.enqueue(7);
e1.enqueue(8);
e1.dequeue();

e1.FrontElement();
}
