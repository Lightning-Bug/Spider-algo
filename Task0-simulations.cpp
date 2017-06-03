#include<stdio.h>


                                                   //FIRST  CODE :- Time complexity of this is O(n)
	int   n;
	
void shobha(int x[3],int b[5])
{
	int m,z[5],c,i,p;
    printf(" \t \t Shobha's Simulation' \n The satck is \n");      //Shobas simulation being imoplemented on initial given stack
	for(i=0; i<n; i++)
	z[i]=b[i];

	for( m=0;m<3;m++)
 {
	p=0;		
    
	for(i=0; i<n; i++)
	{
		 
		if(z[i]>=x[m])
		{   p=1;
		    z[i]=z[i]-x[m];
			for(c=0;c<5;c++)
			printf("\t %d",z[c]);
			 printf("\n");
			break;
		}
	}
	
	if((p==0))
	printf("\t %d \n",-1);
	
	
 }
	
}
 
 
 
 void kamal(int x[3],int a[5])
 
 {  int c[5],t[5],i,m,min,p=0;
    printf(" \n \n \t \t Kamal's Simualation' \n The satck is \n");           //Kamal's simulation being implemented on initial given stack
    
    for(i=0; i<n; i++)
	t[i]=a[i];
	
	for(m=0;m<3;m++)
	{
		  min=100;
			
		for(i=0; i<n; i++)
         c[i]=t[i]-x[m];

         
         for(i=0;i<n;i++)                                   //fnding minimum difference
         { 
		    if( min > c[i]  && c[i] >= 0)
            min=c[i];
		 }
		 
		 for(i=0;i<n;i++)
		 {   if(min==c[i])
		   {
		     p=i;
		    t[p]-=x[m];
		     for(i=0;i<n;i++)
		     printf("\t %d ",t[i]);
		     printf("\n");
		    
		   }
		 }
		 
		 if((min==100))
		 printf("%d \t \n ",-1);
		 
	}
	
} 
	
	
	void jasmine(int x[3],int a[5])
 
 {  int c[5],q[5],m,i,max,p=0;
    printf(" \n \n \t \t JASMINE's Simualation' \n The satck is \n");           //Kamal's simulation being imoplemented on initial given stack

	
	for(i=0; i<n; i++)
	q[i]=a[i];  
		
		
		for(m=0;m<3;m++)
	{   
	
	    max = -100;		
		for(i=0; i<n; i++)
         c[i]=q[i]-x[m];
         
         for(i=0;i<n;i++)                                   //fnding maximum difference
         { 
		 if( max < c[i] && c[i] >= 0 )
            max=c[i];
		 }
		 
		 for(i=0;i<n;i++)
		 {
		    if( max==c[i] )
		   {
		     p=i;
		     q[p]-=x[m];
		     for(i=0;i<n;i++)
		     printf("\t %d ",q[i]);
		      printf("\n");
		     
		   }
		 }
		 
		 if((max == -100))
		 printf("%d \t \n ",-1);
		 
	}
	
	
  }
	

int main()
{
    int a[5], i,x[3];
    printf("Enter the array size : ");
    scanf("%d",&n);
	printf("Enter Array Elements : ");
	for(i=0; i<n; i++)
	{
	   scanf("%d",&a[i]);  
	}
	
	printf("Enter the elements for which you want to compare the three simulations \n");
	
	for(i=0; i<3; i++)
	{
	   scanf("%d",&x[i]);  
	}
	
	printf("  The Initial satck is \n");
	for(i=0; i<n; i++)
	printf("%d \t",a[i]);
	
	printf("\n \n The comparison is for %d   %d   %d respectively \n The order of execution will be \n \t 1)SHOBHA \n \t 2)KAMAL \n \t 3)JASMINE \n \n ",x[0],x[1],x[2]);
	
      shobha(x,a);
	  kamal(x,a);
      jasmine(x,a);
      
  	return 0;
 }


