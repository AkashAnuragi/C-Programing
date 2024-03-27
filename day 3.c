//Pointer
void ak (int *y )   // this is called call by reference because is pass the address
{
printf(" the value of y is %d \n",*y);
*y = 4;
printf("The new value of Y is %d\n" ,*y);
}
void main()
{
int x =12;
ak (&x);
printf(" the vale of x is %d \n",x); //this is called call by value because it pass th value
getch();
}
