#include <iostream>
#define MAX 4
using namespace std;

class Circular_Queue
{
    private:
        char *cqueue_arr;
        int front, rear;
    public:
        Circular_Queue()
        {
            cqueue_arr = new char [MAX];
            rear = front = -1;
        }

        void enqueue(char item)
        {
            if ((front == 0 && rear == MAX-1) || (front == rear+1))
            {
                cout<<"Queue Overflow \n";
                return;
            }
            if (front == -1)
            {
                front = 0;
                rear = 0;
            }
            else
            {
                if (rear == MAX - 1)
                    rear = 0;
                else
                    rear = rear + 1;
            }
            cqueue_arr[rear] = item ;
        }

        void dqueue()
        {
            if (front == -1)
            {
                cout<<"Queue Underflow\n";
                return ;
            }
            cout<<"Element deleted from queue is : "<<cqueue_arr[front]<<endl;
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                if (front == MAX - 1)
                    front = 0;
                else
                    front = front + 1;
            }
        }

        void display()
        {
            int front_pos = front, rear_pos = rear;
            if (front == -1)
            {
                cout<<"Queue is empty\n";
                return;
            }
            cout<<"Queue elements :\n";
            if (front_pos <= rear_pos)
            {
                while (front_pos <= rear_pos)
                {
                    cout<<cqueue_arr[front_pos]<<"  ";
                    front_pos++;
                }
            }
            else
            {
                while (front_pos <= MAX - 1)
                {
                    cout<<cqueue_arr[front_pos]<<"  ";
                    front_pos++;
                }
                front_pos = 0;
                while (front_pos <= rear_pos)
                {
                    cout<<cqueue_arr[front_pos]<<"  ";
                    front_pos++;
                }
            }
            cout<<endl;
        }
};
int main()
{
    int item;
    Circular_Queue cq;

            cq.enqueue('a');
            cq.enqueue('b');
            cq.enqueue('c');

            cq.dqueue();
            cq.dqueue();

            cq.enqueue('d');

            cq.dqueue();

            cq.enqueue('e');
            cq.enqueue('f');
            cq.dqueue();
            cq.dqueue();

            cq.display();

    return 0;
}
