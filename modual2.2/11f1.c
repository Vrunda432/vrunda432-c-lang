#include<stdio.h>
main(){
	int i,n;
	int oddsum=0;
	int oddcount=0;
	for(i=1;i<=10;i++)
	{
		printf("\n please enter any 10 number from keyboard:");
		scanf("%d",&n);
		if(n%2!=0){
			oddcount++;
			oddsum=oddsum+n;
		}
		printf("\n count of even number is=%d",oddcount);
		printf("\n sum of even number is=%d",oddsum);
	}
	}
