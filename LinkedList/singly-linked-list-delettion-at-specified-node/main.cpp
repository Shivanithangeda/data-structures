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
struct node *head=NULL;
int n;
void insert(int newdata)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
}
void deleteatgivenpos(int n)
{
    struct node *temp1;
    temp1=head;
    if(n==1)
    {
        head=temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
    temp1=temp1->next;
    struct node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
}
void display()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    cout<<"THE LINKED LIST IS:";
    display();
    cout<<" the pos is";
    cin>>n;
    deleteatgivenpos(n);
    display();
    return 0;
}