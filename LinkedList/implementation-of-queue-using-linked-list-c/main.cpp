/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
    
};
struct node*front=NULL;
struct node*rear=NULL;
void enqueue(int data)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue()
{
    struct node*temp;
    temp=front;
    if(front==NULL&&rear==NULL)
    {
        cout<<"queue  underflow\n";
    }
    else
    {
        cout<<"the deleted element is"<<front->data;
        cout<<"\n";
        front=front->next;
        free(temp);
    }
}
void peek()
{
    cout<<"the peek element is"<<front->data;
    cout<<"\n";
    
}
void display()
{    

    if(front==NULL&&rear==NULL)
    {
        cout<<"queue is empty\n";
    }
    else
    
    {
        struct node*ptr;
        ptr=front;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
            cout<<"\n";
        }
        
    }
}
int main()
{
    enqueue(2);
    enqueue(4);
    enqueue(5);
    cout<<"before deletion\n";
    display();
    dequeue();
    cout<<"after deletion\n";
    display();
    peek();
}