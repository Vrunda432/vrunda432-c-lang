#include<stdio.h>
main(){
	int i,n;
	int fact=1;
	printf("\n enter the number to find the factorial of it:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("\n %d",fact);
}
