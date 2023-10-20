/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
};
struct node*head=NULL;
void insert(int newdata)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
}
void display()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main()
{
    
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    cout<<"THE LINKED LIST IS\n";
    display();
    return 0;
}