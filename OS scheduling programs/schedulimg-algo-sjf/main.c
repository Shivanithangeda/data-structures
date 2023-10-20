/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
#define max 100
void main()
{
    int i,j,n,t,p[max],bt[max],wt[max],tat[max];
    float awt=0, atat=0;
    printf("ENTER THE NUMBER OF PROCESES\n");
    scanf("%d",&n);
    printf("ENTER THE PROCESS ID\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("ENTER THE BURST TIME OF PROCESSS\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        
    }
    //APPLYING BUBBLE SORT ACC TO BURST TIME
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(bt[j]<bt[j+1])
            {
                t=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=t;
                
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
                
            }
        }
    }
    printf("process\tbursttime\twaiting time\tturnaround time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        {
            for(j=0;j<i;j++)
            {
                wt[i]=wt[i]+bt[j];
            }
            tat[i]=wt[i]+bt[i];
            awt=awt+wt[i];
            atat=atat+tat[i];
            printf("%d\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);
        }
    
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time=%f\n",awt);
    printf("average turnaround time=%f\n",atat);
    }
}
