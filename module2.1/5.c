#include<stdio.h>
main(){
	int year;
	printf("\n enter year");
	scanf("%d,&year");
	(year%4==0)?printf("leap year"): printf("not leap year");
}
