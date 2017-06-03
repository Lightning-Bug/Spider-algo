#include<stdio.h> 
                                                            //ROUND ROBIN
 
int main() 
{ 
 
  int count,j,n,time,remain,flag=0,quantum;                            //quantum=Time Quantum, n=Total processes                        
  int wait_time=0,tt=0,at[10],reqtime[10],rt[10]; 
  printf("Enter Total Process:\t "); 
  scanf("%d",&n); 
  remain=n; 
  for(count=0;count<n;count++) 
  { 
    printf("Enter Arrival Time and Required Time for Process Process Number %d :",count+1);               
    scanf("%d",&at[count]);                                                                                  //TAKING ARRIVAL AND TURNAROUND TIME
    scanf("%d",&reqtime[count]); 
    rt[count]=reqtime[count];                                                                                 //cppying each reqtime array in another spare array
  } 
  printf("Enter Time Quantum:\t"); 
  scanf("%d",&quantum); 
  printf("\n\nProcess\t|Turnaround Time|Waiting Time\n\n"); 
  for(time=0,count=0;remain!=0;) 
  { 
    if(rt[count]<=quantum && rt[count]>0) 
    { 
      time+=rt[count]; 
      rt[count]=0; 
      flag=1; 
    } 
    else if(rt[count]>0) 
    {                                                                                     
      rt[count]-=quantum;                                                                                          
      time+=quantum; 
    } 
    if(rt[count]==0 && flag==1)                                                                          //if the work is done then required time reduces to zero
    { 
      remain--; 
      printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-at[count],time-at[count]-reqtime[count]); 
      wait_time+=time-at[count]-reqtime[count]; 
      tt+=time-at[count]; 
      flag=0; 
    } 
    if(count==n-1) 
      count=0; 
    else if(at[count+1]<=time) 
      count++; 
    else 
      count=0; 
  }                                                                                                  //END

  
  return 0; 
}
