/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
    int n,i,qt,count=0,temp,sq=0,bt[10],wt[10],tat[10],rem_bt[10]; //qt=quantum time sq=temp variable rem_bt=remaining brust time
    float awt=0,atat=0;
    printf("ENTER NUMBER OF PROCESS");
    scanf("%d",&n);
    printf("ENTER BURST TIME PF PROCESSES");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        rem_bt[i]=bt[i];
    }
    printf("ENTER QUANTUM TIME");
    scanf("%d",&qt);
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp=qt;
            if(rem_bt[i]==0)
            {
                count++;
                continue;
            }
            if(rem_bt>qt)
            rem_bt[i]=rem_bt[i]-qt;
            else
            if(rem_bt>=0)
            {
                temp=rem_bt;
                rem_bt[i]=0;
            }
            sq=sq+temp;
            tat[i]=sq;
            
        }
        if(n==count)
        break;
    }
    printf("\nprocess\tburst time\tturnaround time\twaiting time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=tat[i]-bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("\n%d\t%d\t\t%d\t\t%d",i+1,bt[i],tat[i],wt[i]);
    }
    awt=awt/n;
    atat=atat/n;
    printf("average waiting time=%f\n",awt);
    printf("average tturnaround time=%f\n",atat);
}
