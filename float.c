#include <stdio.h>
int main()
{
    int a,b,sum,difference,multiplication,division;
    printf("enter two integers");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d\t",sum);
    difference=a-b;
    printf("difference=%d",difference);
    multiplication=a*b;
    printf("multiplication=%d",multiplication);
    division=a/b;
    printf("division=%d\t",division);
    return 0;
}
