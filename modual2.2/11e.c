#include<stdio.h>
main(){
	int i,n;
	int evensum=0;
	int evencount=0;
	for(i=1;i<=10;i++)
	{
		printf("\n please enter any 10 number from keyboard:");
		scanf("%d",&n);
		if(n%2==0){
			evencount++;
			evensum=evensum+n;
		}
		printf("\n count of even number is=%d",evencount);
		printf("\n sum of even number is=%d",evensum);
	}
	}
