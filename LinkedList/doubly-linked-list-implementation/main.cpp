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
    struct node *prev;
    struct node *next;
};
struct node *head=NULL;
void insert(int newdata)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->prev=NULL;
    newnode->next=head;
    if(head!=NULL)
    {
        head->prev=newnode;
        head=newnode;
    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
        cout<<"\n";
    }
}
int main()
{
    insert(9);
    insert(8);
    insert(6);
    insert(7);
    insert(3);
    display();
    cout<<"THE DOUBLY LINKED LIST IS:";
    return 0;
}
