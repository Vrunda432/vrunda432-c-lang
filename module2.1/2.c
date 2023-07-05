#include<stdio.h>
main(){
	int a=12,b=23,ans;
	float divans;
	//addicion
    printf("\n enter the value a and b");
    scanf("%d %d",&a,&b);
    ans=a+b;
    printf("\n addtion=%d",ans);
	ans=a-b;
	printf("\n sub=%d", ans);
	 ans=a*b;
    printf("\n multiplication=%d",ans);
     divans=(float)a/b;
    printf("\n division=%f",divans);
     ans=a%b;
    printf("\n moduls=%d",ans);
	}
