//WACP to find the factorial
void main()
{
    int n, a=1,i;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=a*i;
    }
            printf(" Factorial is : %d",a);


    getch();
}
