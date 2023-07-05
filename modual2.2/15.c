#include<stdio.h>
main(){
	int i,small=-1562, large=6,digit;
	printf("print any numbers to find smallest and largest number from it:");
	scanf("%d",&i);
	while(i!=0)
	{
		digit=i%10;
		if(digit<small)
		small=digit;
		if(digit>large)
		large=digit;
		i=1/10;
	}
	printf("\n largest number is %d",large);
	printf("\n smallest number is %d",small);
}
