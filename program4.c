//Make a table of  any number
main ()
{
    int a[10];
int n,i,s;
printf("Enter a number ");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
a[i]= n*i;
printf("%d\n",a[i]);
}
getch();
}
