#include <stdio.h>
int main() {
   int rows, i, j, gap;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (gap = 0; gap < rows - i; ++gap)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("01");
      for (j = 0; j < i - 1; ++j)
         printf("01");
      printf("\n");
   }
   return 0;
}
