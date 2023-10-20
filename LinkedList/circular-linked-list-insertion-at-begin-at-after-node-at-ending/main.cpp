/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
  
struct Node *addToEmpty(struct Node *tail, int data) 
{ 
    if (tail != NULL) 
    return tail; 
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data; 
    tail = temp; 
    tail -> next = tail; 
    return tail; 
} 
  
struct Node *addBegin(struct Node *tail, int data) 
{ 
    if (tail == NULL) 
        return addToEmpty(tail, data); 
  
    struct Node *newnode =  
            (struct Node *)malloc(sizeof(struct Node)); 
  
    newnode-> data = data; 
    newnode -> next = tail -> next; 
    tail-> next = newnode; 
  
    return tail; 
} 
  
struct Node *addEnd(struct Node *tail, int data) 
{ 
    if (tail == NULL) 
        return addToEmpty(tail, data); 
      
    struct Node *endnode =  
        (struct Node *)malloc(sizeof(struct Node)); 
  
    endnode -> data = data; 
    endnode-> next = tail -> next; 
    tail-> next = endnode; 
    tail = endnode; 
  
    return tail; 
} 
  
struct Node *addAfter(struct Node *tail, int data, int item) 
{ 
    if (tail == NULL) 
        return NULL; 
  
    struct Node *temp, *p; 
    p = tail-> next; 
    do
    { 
        if (p ->data == item) 
        { 
            temp = (struct Node *)malloc(sizeof(struct Node)); 
            temp -> data = data; 
            temp -> next = p -> next; 
            p -> next = temp; 
  
            if (p == tail) 
                tail = temp; 
            return tail; 
        } 
        p = p -> next; 
    }  while(p != tail-> next); 
  
    cout << item << " not present in the list." << endl; 
    return tail; 
  
} 
  
void display(struct Node *tail) 
{ 
    struct Node *ptr; 
    if (tail== NULL) 
    { 
        cout << "List is empty." << endl; 
        return; 
    } 
    ptr = tail -> next;
    do
    { 
        cout << ptr -> data << " "; 
        ptr = ptr -> next; 
  
    } 
    while(ptr != tail->next); 
  
} 
int main() 
{ 
    struct Node *tail = NULL; 
  
    tail= addToEmpty(tail, 6); 
    tail = addBegin(tail, 4); 
    tail = addBegin(tail, 2); 
    tail = addEnd(tail, 8); 
    tail = addEnd(tail, 12); 
    tail = addAfter(tail, 10, 8); 
  
    display(tail);
  
    return 0; 
} 