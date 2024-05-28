// reverse and palindrom program
main()
{
    int x,s=0,r,y;
    printf("Enter the number : ");
    scanf("%d",&x);
    y=x;
    while(x!=0){
            r=x%10;
        s=(s*10+r);
    x=x/10;
    }
    if(s==y){
        printf("it is pallindrom");
    }
    else{
        printf("it is not a pallindrom no.");
    }
    getch();
}
