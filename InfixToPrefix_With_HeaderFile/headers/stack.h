#include<iostream>

#define SIZE 5

using namespace std;

class STACK
{
private:
        int Stack[SIZE];

        int MaxSize=5;
public:
    int Top=0;
 bool isEmpty(){
	/*returns True if stack is empty*/
	return (Top == 0);
}


      bool isFull(){
	/*returns True if stack is full*/

	return (Top == MaxSize);
}
bool push(int Element ){
	// inserts Element at the top of the stack
	if( isFull( ) ) { cout << "Stack is Full\n"; return false; }
	// push element if there is space
 	Stack[ Top++ ] = Element;
	return true;
}
bool pop(){
	// removes top element from stack and puts it in
	if( isEmpty() ) { cout << "Stack empty\n"; return false; }
	Top--;
	return true;
}
int topElement(){
	// gives the top element
	return Stack[ Top - 1 ];
}
void show(){
	//prints the whole stack from top to bottom
	if(isEmpty()) { cout << "Stack empty\n"; return; }
	for( int i=Top-1; i>=0; i-- ) cout << Stack[i] << endl;
}

};
