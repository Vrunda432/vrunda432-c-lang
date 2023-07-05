#include <stdio.h>
 main(){
    int a=12, b=34;
    printf("\n entre the value of a :", a);
    scanf("%d", &a);

    printf("\n entre the value of b :", b);
    scanf("%d", &b);

    printf("\n Before swapping a is %d and b is %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n After swapping a is %d and b is %d", a, b);
}
