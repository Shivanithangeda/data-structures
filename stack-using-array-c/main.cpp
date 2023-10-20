/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <iostream>
// using namespace std;
// #define N 101
// int stack[N] ;
// int top= -1;
// void push(int x)
// {
//     if (top==N-1)
//     {
//         cout<<"Error:stack overflow\n";
//         return;
//     }
//     else
//     {
//         top++;
//         stack[top]= x;
//     }
// }
// void pop()
// {
//     if(top==-1)
//     {
//         cout<<"Error:stack underflow\n";
//         return;
//     }
//     else
//     {
//         top--;
//     }
// }
// void peek()

//     {
//     cout<<"the peek element is:"<<stack[top];
//     }
// void display()
// {
//     int i;
//     for(i=0;i<=top;i++)
//     {
//         cout<<stack[i]<<"";
//         cout<<"\n";
//     }
// }
// int main()
// {
//     push(10);
//     push(20);
//     pop();
//     push(30);
//     push(40);
//     peek();
//     display();
// }

//stack using array


// #include<stdio.h>
// #define N 101
// int stack[N];
// int top=-1;
// void push(int x){
//     if(top==N-1){
//         printf("stack overflow");
//     }
//     else{
//         top++;
//         stack[top]=x;
//     }
// }

// void pop(){
//     if(top==-1){
//         printf("stack underflow");
//     }
//     else{
//         top--;
//     }
// }
// void print(){
//     int i;
//     for(i=0;i<=top;i++){
//         printf("%d\n",stack[i]);
//     }
// }
// void peek(){
//     printf("the top most element in the stack is:%d\n",stack[top]);
// }

// int main(){
//     push(10); push(20); push(30);push(40);print();printf("deleted elements are:");pop();pop();peek();print();
// }


#include<stdio.h>
int stack[10];
int top1=-1;
int maxsize1=5;
void push1(int e);
void pop1();
void peek1();
void display1();
void push2(int e);
void pop2();
void peek2();
void display2();
void main(){
    int ele,opt1,opt2;
    char ch='y';
    while(ch=='y'||ch=='Y'){
        printf("\n select stack to perform operation:");
        printf("\n 1.stack1\n stack2");
        printf("\n enter your stack");
        scanf("%d",&opt1);
        switch(opt1){
            case 1:
            while(ch=='y'||ch=='Y'){
                printf("\n choose any one of the following:");
                printf("\n 1.push\n2.pop\n 3.peek\n4.display");
                printf("\n enter ypour option:");
                scanf("%d",&opt2);
                switch(opt2){
                    case 1:
                    if(top1==maxsize1-1)
                    printf("\n stack overflow");
                    else{
                        printf("\n enter element to insert into stack");
                        scanf("%d",&ele);
                        push1(ele);
                    }
                    break;
                    case2:
                    if(top==-1)
                    printf("\n stack is underflow");
                    else
                    pop1();
                    break;
                    case 3:
                    peek1();
                    break;
                    if(top1==-1)
                    printf("\nstcak is underflow");
                    else{
                        display1();
                        break;
                    }
                    default:
                    printf("\n it is invalid choice");
                    break;
                }
                printf("\n\n do you want to continue:y/n:");
                ch=getch();
            }
            case 2:
            while(ch=='y'||ch=='Y'){
                printf("\n choose any one of the following:");
                printf("\n 1.push\n2.pop\n 3.peek\n4.display");
                printf("\n enter ypour option:");
                scanf("%d",&opt2);
                switch(opt2){
                    case 1:
                    if(top2==maxsize2-1)
                    printf("\n stack overflow");
                    else{
                        printf("\n enter element to insert into stack");
                        scanf("%d",&ele);
                        push2(ele);
                    }
                    break;
                    case2:
                    if(top2==4)
                    printf("\n stack is underflow");
                    else
                    pop2();
                    break;
                    case 3:
                    peek2();
                    break;
                    if(top1==-1)
                    printf("\nstcak is underflow");
                    else{
                        display2();
                        break;
                    }
                    default:
                    printf("\n it is invalid choice");
                    break;
                }
                printf("\n\n do you want to continue:y/n:");
                ch=getch();
            }
        }
    }
    
void push1(){
    
}
void pop2(){
    
}
}
