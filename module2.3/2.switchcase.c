#include<stdio.h>
main(){
	int a,b,c,no;
	printf("\n enter 1 to sum a and b");
	printf("\n enter 2 to substrct a and b");
	printf("\n enter 3 to multiply a and b");
	printf("\n enter 4 to divide a and b");
	printf("\n select number from above menu:");
	scanf("%d",&c);
	printf("\n enter value a to calculate:");
	scanf("%d",&a);
	printf("enter value b to calcullate:");
	scanf("%d",&b);
	switch(c)
	{
		case 1:
			printf("\n sum of a and b is:%d",a+b);
			break;
		case 2:
			printf("\n substraction of a and b is:%d",a-b);
			break;
		case 3:
		    printf("\n mulplication of a and b is:%d",a*b);
			break;
		case4:
		printf("\n division of a and b is:%f" ,(float)a/b);
		break;
		defult:
		printf("\n invalid output");
		break;		
	}
}
