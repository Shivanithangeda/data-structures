/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <iostream>
// using namespace std;
// struct node
// {
//     int data;
//     struct node*next;
// };
// struct node*top= NULL;
// void push(int data)
// {
//     struct node*newnode;
//     newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data= data;
//     newnode->next= top;
//     top=newnode;
// }
// void pop()
// {
//     if(top==0)
//     {
//     cout<<"error:stack underflow\n";
//     }
//     else
//     {
//         struct node*temp;
//         temp=top;
//         top=top->next;
//         free(temp);
//     }
// }
// void peek()
// {
//     cout<<"The peek node is"<<top->data;
    
// }
// void display()
// {
//     struct node*ptr;
//     ptr=top;
//     while(ptr!=NULL)
//     {
//         cout<<ptr->data<<" ";
//         ptr=ptr->next;
//     }
//     cout<<"\n";
// }
// int main()
// {
//     push(2);
//     push(3);
//     push(4);
//     cout<<"\nbefore pop\n";
//     display();
//     pop();
//     cout<<"after pop\n";
//     display();
//     peek();
// }

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=0;
void push(int data){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=top;
    top=newnode;
}
void pop(){
    if(top==0){
        printf("stack underflow");
    }
    else{
        struct node *temp;
        temp=top;
        top=top->next;
        free(temp);
    }
}
void peek(){
    printf("the top most element is:%d",top->data);
}
void display(){
    struct node  *ptr;
    ptr=top;
    while(ptr!=0){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    int x;
    printf("enter the elements to insert into stack:");
    scanf("%d",&x);
    push(x);
}


