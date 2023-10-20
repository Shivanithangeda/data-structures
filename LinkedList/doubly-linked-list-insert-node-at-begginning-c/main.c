/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  
   
//Represent a node of the doubly linked list  
  
struct node{  
    int data;  
    struct node *previous;  
    struct node *next;  
};      
   
//Represent the head and tail of the doubly linked list  
struct node *head, *tail = NULL;  
   
//addAtStart() will add a node to the starting of the list  
void addAtStart(int data) {  
    //Create a new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
      
    //If list is empty  
    if(head == NULL) {  
        //Both head and tail will point to newNode  
        head = tail = newNode;  
        //head's previous will point to NULL  
        head->previous = NULL;  
        //tail's next will point to NULL, as it is the last node of the list  
        tail->next = NULL;  
    }  
    //Add newNode as new head of the list  
    else {  
        //head's previous node will be newNode  
        head->previous = newNode;  
        //newNode's next node will be head  
        newNode->next = head;  
        //newNode's previous will point to NULL  
        newNode->previous = NULL;  
        //newNode will become new head  
        head = newNode;  
    }  
}  
   
//display() will print out the nodes of the list  
void display() {  
    //Node current will point to head  
    struct node *ptr = head;  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Adding a node to the start of the list: \n");  
    while(ptr != NULL) {  
        //Prints each node by incrementing pointer.  
        printf("%d ",ptr ->data);  
        ptr = ptr->next;  
    }  
    printf("\n");  
}  
   
int main()  
{  
    //Adding 1 to the list  
    addAtStart(1);  
    display();  
    //Adding 2 to the list  
    addAtStart(2);  
    display();  
    //Adding 3 to the list  
    addAtStart(3);  
    display();  
    //Adding 4 to the list  
    addAtStart(4);  
    display();  
    //Adding 5 to the list  
    addAtStart(5);  
    display();  
   
    return 0;  
}  