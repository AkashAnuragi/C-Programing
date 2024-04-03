//Switch condition
void main ()
{
    int ch,a,b,c;
printf(" \n press 1, Addition");
printf("\n press 2, Subtraction");
printf("\n press 3, Division");
printf("\n press 4, Multiplication");
printf("\n press 5, for Exit");
//printf(" \n Enter your choice :");
//scanf("\n %d",&ch);
while (1){
printf(" \n\n Enter your choice :");
scanf("%d",&ch);


switch (ch)
{
case 1:
    {
        printf("Enter 2 numbers :");
        scanf("%d %d",&a,&b);
        c = a+b;
        printf("Additon is : %d ",c);
        break;
    }
    case 2:
    {
        printf("Enter 2 numbers :");
        scanf("%d %d",&a,&b);
        c = a-b;
        printf("Subtraction is : %d",c);
         break;
    }
    case 3:
    {
        printf("Enter 2 numbers :");
        scanf("%d %d",&a,&b);
        c = a/b;
        printf("Division is : %d",c);
         break;
    }case 4:
    {
        printf("Enter 2 numbers :");
        scanf("%d %d",&a,&b);
        c = a*b;
        printf("Multiplication is : %d",c);
         break;
    }
    case 5 :{
         exit(0);
    }
    default :
        {
            printf(" Sorry! Wrong input");
        }
}
}
getch();
}
