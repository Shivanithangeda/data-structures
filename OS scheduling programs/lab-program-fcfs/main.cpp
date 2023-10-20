/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//LAB EXECUTION PROGRAM
//SCHEDULING ALGORITHM FCFS
#include<stdio.h>
#define max 100
int main()
{
    int i,j,n,bt[max],wt[max],tat[max];
    float awt=0,atat=0;
    printf("ENTER THE NUMNER OF PROCESSES:");
    scanf("%d",&n);
    printf("ENTER THE BURST TIME OF PROCESSES");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("process\t bursttime\t waitingtime\t turnaroundtime\n");
    
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
            printf("\n");
            
        }
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        
        atat=atat+tat[i];
        printf("%d\t %d\t\t %d\t\t %d",i+1,bt[i],wt[i],tat[i]);
        
    }
    
    awt=awt/n;
    printf("\n");
    atat=atat/n;
    printf("AVERAGE WAITING TIME=%f\n",awt);
    printf("AVERAGE TURNAROUND TIME=%f\n",atat);
    
}




















