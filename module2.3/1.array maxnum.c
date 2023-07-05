#include<stdio.h>
int max_no();
main(){
	printf("\n max numer from array is:%d",max_no());
}
int max_no(){
	int i,j,max=0;
	int a[5];
	for(i=0;i<5;i++)
	{
		printf("\n enter 5 number for array:");
		scanf("%d",&a[i]);
	}
	printf("\n here is your 5 number for array:");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i>max])
		{
			max=a[i];
		}
	}
	return max;
}

