#include <stdio.h>

int prost(int x) {
   for (int i = 2; i < x; i++)
      if (x % i == 0)
         return 0;
   return 1;
}

int main(void) {
   int n;
   do {
      printf("Upisite N > ");
      scanf("%d", &n);
   } while (n <= 0 || n > 50);
   for (int i = 2, c = 0; c < n; i++) {
      if (prost(i)) {
         c++;
         if (i % 3 == 0)
            printf("%d ", i);
         if (i % 3 == 1)
            printf("%d ", i - 1);
         if (i % 3 == 2)
            printf("%d ", i + 1);
      }
   }
   return 0;
}
