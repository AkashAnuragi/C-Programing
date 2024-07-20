#include<stdio.h>
int main()
{
    int a=10;
    int *p,**q;
    p=&a;
    q=&p;
    printf("Value of a :%d",**q);
    return 0;
}