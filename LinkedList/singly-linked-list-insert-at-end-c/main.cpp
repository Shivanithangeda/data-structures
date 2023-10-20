/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
struct node{
    int data;
     struct node*next;
};
struct node*head=NULL;
void insertatend(int data)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    
    struct node*temp;
    temp=head;
    if(temp==NULL)
    temp=newnode;
    else
    {
        while(temp->next!=NULL)
        temp=temp->next;
    }
        temp->next=newnode;
}
void display()
{
    struct node*ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    insertatend(2);
    insertatend(3);
    insertatend(4);
    insertatend(5);
    insertatend(7);
    cout<<"THE ELEMENTS INSERTED AT THE END OF THE LINKED LIST\n";
    display();
    
}