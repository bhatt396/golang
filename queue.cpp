#include<iostream>
using namespace std;

class Stack{
    int front,size,rear;
    int *arr;
    public:
    Stack(int size){
        this->size=size;
        this->front=-1;
        this->rear=size-1;
        arr=new int[size];
    }
    ~Stack()
    {delete[] arr;}
    bool isempty()
    {
        return this->front==-1;
    }
    bool isfull()
    {
        return this->front==rear;
    }
    void enqueue(int data)
    {
        if(isfull())
        {
            
        }
        this->arr[++front]=data;
    }
    int pop()
    {
        
    }
};
int main()
{
    Stack s;



}



/*For dequeue
Step 1:If FRONT=-1 or FRONT>REAR
Write UNDERFLOW
ELSE
SET VAL QUEUE(FRONT)


*/