#include<stdio.h>
main(){
	int no,rem,sum=0;
	printf("enter the any number to sum their digits:");
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		sum+=rem;
	}
	printf("the summetion of first and last digits of number is:%d",sum);
}
