/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*head, *delatbeg;
void create(int data)
{
struct node *newnode= (struct node*)malloc(sizeof(struct node));
if(newnode=NULL)
{
    printf("ERROR:OVERFLOW");
} 
else
{
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    printf("\nNODE INSERTED");
}
}
int main()
{
    struct node *ptr;
    head= delatbeg(head);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
        printf("NODE DELETED FROM BEGINNING");
    }
    return 0;
}
void delatbeg()
{
    struct node *delatbeg(struct node *head)
    {
    if(head=NULL)
    printf("list is empty");
    }
    else
    {
        struct node *temp;
        temp=head;
        head=head->next;
        free(temp);
        temp=NULL;
        
    }
    return head;
}
