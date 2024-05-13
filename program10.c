//Armstrong Number
void main()
{
    int a,b,c=0,x,y;
    printf("Enter the number :");
    scanf("%d",&x);
    y=x;
    while(y>0){
            a= y%10;
            c= c+(a*a*a);
      y=y/10;
    }
    if(x==c){
        printf("this is armstrong");
    }
    else{
        printf("not a armstrong");
    }
    getch();
}
