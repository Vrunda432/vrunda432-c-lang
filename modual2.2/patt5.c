#include<stdio.h>
main(){
	int i,j;
	for(i=1;j<=5;i++)
	{
		char a='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			a++;
		}
		printf("\n");
	}
}
