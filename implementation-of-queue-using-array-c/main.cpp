/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#define size 101
int queue[size];
int front=-1;
int rear=-1;
void enqueue(int data)
{
    if(rear==size-1)
    {
        cout<<"error:queue overflow\n";
        
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=data;
    }
    else
    {
        rear++;
        queue[rear]=data;
        
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    {
        cout<<"queue underflow\n";
        
    }
    else if(front=rear)
    {
      front=rear=-1;
    }
    else
    {
     // cout<<"the deleted element is"<<queue[front];
      front++;
      
    }
}
void peek()
{
    cout<<"\nthe peek element is:"<<queue[front];
    cout<<"\n";
}
void display()
{
    int i;
    if(front==-1&&rear==-1)
    {
        cout<<"queue is empty\n";
    }
    else
    {
      for(i=0;i<rear+1;i++)
      {
          cout<<queue[i]<<" ";
          cout<<endl;
      }
    }
}
int main()
{
     cout<<"element before deletion\n";
    enqueue(2);
    enqueue(3);
    enqueue(7);
   
    display();
     peek();
    cout<<"element after deletion\n";
    dequeue();
    display();
    
}



