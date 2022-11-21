#include <stdio.h>

int main() {
   int m, n, t;
   printf("Unesite m > ");
   scanf("%d", &m);
   printf("Unesite n > ");
   scanf("%d", &n);
   int ar[m][n];
   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         scanf("%d", &ar[i][j]);
   printf("Unesite trazenu udaljenost > ");
   scanf("%d", &t);
   for (int i = 0; i < m; i++) {
      int c = 0;
      for (int j = 0; j < n; j++)
         if (ar[i][j + 1] - ar[i][j] == t)
            c++;
      printf("%d. redak, parova: %d\n", i + 1, c);
   }
   return 0;
}