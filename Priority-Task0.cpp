#include<stdio.h>                                                            //PRIORITY TECHNIQUE


int main()
{
    int rt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp;          //Variables for required time,process number, waiting time,turnaround time ......
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Required Time and Priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Required Time:");
        scanf("%d",&rt[i]);
        printf("Priority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;                                                                           //process number
    }
	 
	 //sorting Required time, priority and process number in ascending order using "selection sort"
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=rt[i];
        rt[i]=rt[pos];
        rt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;                                                                             //waiting time for first one is zero
 
                                                                                               // waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=rt[j];
 
        total+=wt[i];
    }
 
    
 
    printf("\nProcess\t    Required Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=rt[i]+wt[i];                                                               //calculate turnaround time
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],rt[i],wt[i],tat[i]);
    }
 
 
    return 0;
}

    
