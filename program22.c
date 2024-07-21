#include<stdio.h>
int main()
{
    int x=4;
    int *p;
    p=&x;
    printf("Value of X before incrementing:%d\n",x);
    *p=*p+1;
    printf("Value of X after incrementing:%d",x);
    return 0;
}