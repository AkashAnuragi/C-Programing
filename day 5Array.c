//Array
main()
{
int m[5],i; float s=0;
printf("Enter the marks of 5 subject :");
for(i=0;i<5;i++){
scanf("%d",&m[i]);
printf(" print %d\n",m[i]);
}
for(i=0;i<5;i++){
    s = s+m[i];
}
printf(" total marks is %f\n ",s);
printf(" the percentage is %f\n",(s/500)*100);
getch();
}
