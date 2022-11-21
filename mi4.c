#include <stdio.h>
#include <string.h>

int main(void) {
   char ulaz[30], izlaz[30];
   int slova[30] = {0}, j = 0;
   printf("Upisite ulazni niz > ");
   scanf("%[^\n]s", ulaz);
   for (int i = 0; i < strlen(ulaz); i++)
      if (ulaz[i] >= 'a' && ulaz[i] <= 'z' && !slova[ulaz[i] - 'a']) {
         slova[ulaz[i] - 'a'] = 1;
         izlaz[j++] = ulaz[i];
      }
   ulaz[strlen(ulaz) + 1] = '\0';
   ulaz[strlen(ulaz)] = '\n';
   izlaz[j] = '\0';
   printf("Izlaz: %s\n", izlaz);
   printf(" Ulaz: %s", ulaz);
   return 0;
}