//WACP to find the power a number
void main()
{
    int n, i,x,s=1;
    printf("Enter a value :");
    scanf("%d",&x);
    printf("Enter a power :");
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        s=s*x;
    }
    printf(" result is : %d",s);
}

