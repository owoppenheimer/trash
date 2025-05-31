#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef double f64;

int main(void) {
   unsigned short n;
   if (scanf("%hu", &n) != 1) { fprintf(stderr, "Input/Output error."); return 1; }

   f64 *arr = malloc(n * sizeof(f64));
   if (arr == NULL) { fprintf(stderr, "Memory error.\n"); return 1; }

   for (size_t i = 0; i < n; i++) {
      printf("Input %zu element: ", i + 1);
      if (scanf("%lf", &arr[i]) != 1) { fprintf(stderr, "Input/Output error."); free(arr); return 1; }
   }

   for (size_t i = 0; i < n; i++) {
      printf("\n%zu: %lf", i + 1, pow(arr[i], 2.0));
   }

   free(arr);
   return 0;
}
