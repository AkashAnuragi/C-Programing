void main()
{
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=7;j++){
                if(j>=5-i && j<=3+i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
        }
        printf("\n");
    }
    getch();
}


