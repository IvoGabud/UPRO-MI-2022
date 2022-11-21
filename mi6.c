#include <stdio.h>
#define MAX 10

int main(void) {
   float tezinski_prosjek = 0.f, suma_ECTS = 0.f;
   int sifStudent;
   struct {
      int sif_student;
      float ECTS;
      int ocjena;
   } rezultati[MAX] = {{1, 5.5f, 5}, {2, 5.5, 4}};

   scanf("%d", &sifStudent);

   for (int i = 0; i < MAX; i++)
      if (rezultati[i].sif_student == sifStudent && rezultati[i].ocjena > 1) {
         tezinski_prosjek += rezultati[i].ECTS * rezultati[i].ocjena;
         suma_ECTS += rezultati[i].ECTS;
      }
   if (suma_ECTS > 0.f)
      printf("Tezinski prosjek: %5.2f\n", tezinski_prosjek / suma_ECTS);
   return 0;
}