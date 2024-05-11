//LCM program
void main()
{
int x,y,i;
printf("Enter two numbers");
scanf("%d%d",&x,&y);
for(i=x>y?x:y ;i<=x*y;i++){ //this is the conditional operator which value is great that value is put in the i
if(i%x==0 && i%y==0)
{
printf("LCM is %d",i);
break;
}
}
getch();
}
