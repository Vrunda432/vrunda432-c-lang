#include<stdio.h>
main(){
     int i,j;
	 int a[5];
	 for(i=0;i<5;i++){
	 	printf("enter the 5 number for aaray:");
	 	scanf("%d",&a[i]);
	 }	
	 printf("your array is:");
	 for(i=0;i<5;i++)
     {
     	printf("%d",a[i]);
		 }
		 for(i=0;i<5;i++){
		 	if(a[i]>a[j])
			 {
			 	int temp=a[i];
			 	a[i]=a[j];
			 	a[j]=temp;
					  }
				}
	       }
	       printf("\n the array in ascending order:");
	       for(i=0;i<5;i++){
	       	printf("%d",a[i]);
		   }
		   for(i=0;i<5;i++){
		   	for(j=i+1;j<5;j++)
		   	{
		   		if(a[i]<a[j])
		   		{
		   			int temp=a[i]
		   			a[i]=a[j];
		   			a[j]=temp;
				   }
			   }
		   }
		   printf("\n the array in decending order:");
		   for(i=0;i<5;i++)
		   {
		   	printf("%d",a[i]);
		   }
}
