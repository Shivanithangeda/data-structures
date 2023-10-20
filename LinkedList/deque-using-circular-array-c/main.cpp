/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#define size 50
int deque[size];
int front=-1;
int rear=-1;
void enqueuefront (int data)
{
    if((front==0&&rear==size-1)||(front==rear+1))
    {
        cout<<"circular queue is full\n";
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        deque[front]=data;
        
    }
    else if(front==0)
    {
        front=size-1;
        deque[front]=data;
        cout<<"\n";
    }
    else
    {
        front--;
        deque[front]=data;
        cout<<"\n";
    }
}
void enqueuerear(int data)
{
    if((front==0&&rear==size-1)||(front==rear+1))
    {
        cout<<"circular queue is full\n";
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        deque[rear]=data;
        cout<<"\n";
        
    }
    else if(rear==size-1)
    {
        rear=0;
        deque[rear]=data;
        cout<<"\n";
    }
    else
    {
        rear++;
        deque[rear]=data;
        cout<<"\n";

    }
    
}
void dequeuefront()
{
    if(front==-1&&rear==-1)
    {
        cout<<"circular queue is empty\n";
    }
    else if(front==rear)
    {
        cout<<deque[front];
        cout<<"\n";
        front=rear=-1;
    }
    else if(front==size-1)
    {
        cout<<deque[front];
        cout<<"\n";
        front=0;
    }
    else
    {
        cout<<deque[front];
        cout<<"\n";
        front++;
        
    }
}
void dequeuerear()
{
    if(front==-1&&rear==-1)
    {
        cout<<"circular queue is empty\n";
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else if (rear==0)
    {
        cout<<deque[rear];
        cout<<"\n";
        rear=size-1;
    }
    else
    {
        cout<<deque[rear];
        cout<<"\n";
        rear--;
        
    }
}

void getfront()
    {
    cout<<deque[front];
    
    }
void getrear()
    {
    cout<<deque[rear];
    
    
    }
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        cout<<"circular queue is empty\n";
    }
    else
    {
        while(i!=rear)
        {
            cout<<"DISPLAYING ELEMENTS"<<deque[i];
            cout<<"\n";
            i=(i+1)%size;
        }
    }

}
int main()
{
    
    enqueuefront(10);
    enqueuefront(20);
    enqueuefront(30);
    enqueuerear(40);
    enqueuerear(50);
    enqueuerear(60);
    cout<<"BEFORE DELETION\n";
    display();
    dequeuefront();
    dequeuerear();
    cout<<"AFTER DELETION\n";
    getfront();
    getrear();
    
 
}
    

