#include<stdio.h>
main(){
	int i,n,sum=0;
	float avg;
	printf("\ninput the 10 numbers:");
	for(i=1;i<=10;i++){
		printf("number-%d:",i);
		scanf("%d",&n);
		sum+=n;
	}
	avg=sum/10.0;
	printf("the sum of 10 no is :%d \n the average is:%f\n,sum,avg");
}
