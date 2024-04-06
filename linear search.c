#include <stdio.h>
#include<conio.h>
int n,x,i,arr[100];
int search(int arr[], int n, int x)
{
for (i = 0; i < n; i++)
if (arr[i] == x)
return i;
return -1;
}
void main()
{
 clrscr();
printf(“#LINEAR SEARCH\n”);
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d integers:", n);
for(i = 0; i < n; i++)
scanf("%d",&arr[i]);
printf("Enter value to find:");
scanf("%d", &x);
int result = search(arr, n, x);
if (result == -1)
printf("Not found");
else
printf("Element is found at position %d", result+1);
getch(); }
