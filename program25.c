#include <stdio.h>
int main() {
   int x = 5;
   int y = x++;
   printf("%d %d", x, y);
   return 0;
}