#include<iostream>
using namespace std;
class Stack{
    int top,size;
    int *arr;
    public:
    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];
    }
    ~Stack()
    {delete[] arr;}
    bool isempty()
    {
        return this->top==-1;
    }
    bool isfull()
    {
        return this->top==size-1;
    }
    void push(int data)
    {
        if(isfull())
        {
            
        }
        this->arr[++top]=data;
    }
    int pop()
    {
        
    }
};
//Write algorithm for enqueue dequeue