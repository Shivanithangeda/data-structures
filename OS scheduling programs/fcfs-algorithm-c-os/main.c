/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>
#define max 30
void main()
{
    int i,j,n,bt[max],wt[max],tat[max];
    float awt=0, atat=0;
    printf("ENTER THE NUMBER OF PROCESES\n");
    scanf("%d",&n);
    printf("ENTER THE BURST TIME OF PROCESSS\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        
    }

    printf("process\tbursttime\twaiting time\tturnaround time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        for(j=0;j<i;j++)
            {
                wt[i]=wt[i]+bt[j];
            }
            tat[i]=wt[i]+bt[i];
            awt=awt+wt[i];
            atat=atat+tat[i];
            printf("%d\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time=%f\n",awt);
    printf("average turnaround time=%f\n",atat);
}



