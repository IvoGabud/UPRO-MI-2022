#include <stdio.h>

int main(void) {
   int n, t;
   do {
      printf("Unesite n > ");
      scanf("%d", &n);
   } while (n <= 0);
   int a[n];
   for (int i = 0; i < n; i++)
      scanf("%d", a + i);
   for (int i = 0; i < n - 1; i += 2)
      t = a[i], a[i] = a[i + 1], a[i + 1] = t;
   for (int i = 0; i < n; i = i + 1)
      printf("%d ", a[i]);
   return 0;
}