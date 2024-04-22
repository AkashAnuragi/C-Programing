// Fabonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,i,c;
printf("enter a range :");
scanf("%d",&n);
for(i=0;i<n;i++){
        printf(" %d ",a);
    c=a+b;
    a=b;
    b=c;

}
getch();
}
