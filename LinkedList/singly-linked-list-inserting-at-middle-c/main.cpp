/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *head,*new_node,*temp;
void insert(int data,int pos)
{
    node* new_node= new node;
    new_node->data=data;
    new_node->next=NULL;
   // head=new_node;
    if(pos==1)
    {
        new_node->next=head;
        head=new_node;
        return;
    }
    temp=head;
    for(int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void display()
{
  
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    head=NULL;
    insert(3,1);
    insert(1,2);
    insert(7,1);
    insert(2,4);
    insert(9,3);
    cout<<"LINKED LIST IS\n";
    display();
    return 0;
}






