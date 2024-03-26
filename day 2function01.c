 int ak(int a , int b) //formal arguments
{
int c;
 c=a+b;
return c;
}
 void main()
{
/*int x=3,y=5;*/
int x,y,p;
printf("Enter two numbers :");
scanf("%d%d",&x,&y);
 p=ak(x,y);/*this is calling the function of ak this is called call by value and pass by value*/
 printf("Addition is:%d",p);
getch();
}

