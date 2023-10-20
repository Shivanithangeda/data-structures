/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, f
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#define size 5
int queue[size];
int rear=-1;
int front=-1;
void enqueue(int data)
{
    if (front=-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=data;
    }
    else if (front==(rear+1)%size)
    {
     cout<<"circular queueis full";
     cout<<"\n";
    }
    else
    {
        rear=(rear+1)%size;
        queue[rear]=data;
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
    cout<<"the queue is empty";
    cout<<"\n";
    
    }
    else if(front==rear)
     {
         front=rear=-1;
        // cout<<"\n";
     }
     else
     {
         cout<<"the deleted element is"<<queue[front];
        // cout<<"\n";
         front=(front+1)%size;
     }
}
void peek()
{
    cout<<"THE PEEK ELEMENT IS"<<queue[front];
    cout<<"\n";
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
    cout<<"the queue is empty";
    cout<<"\n";
    
    }
    else
    {
        cout<<"the queue is\n";
        while(i!=rear)
        {
            cout<<queue[i];
            cout<<"\n";
            i=(i+1)%size;
        }
        cout<<queue[rear];
        cout<<"\n";
    }
    
    
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    cout<<"BEFORE DELETION\n";
    display();
    cout<<"AFTER DELETION\n";
    dequeue();
    dequeue();
    display();
    peek();
    

    
}