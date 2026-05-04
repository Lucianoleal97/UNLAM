#include <cstdio.h>
#include <cmath.h>

int main() {
   double base, exponente, resultado;

   printf("Introduce la base: ");
   scanf("%lf", &base);

   printf("Introduce el exponente: ");
   scanf("%lf", &exponente);

   resultado = pow(base, exponente);

   printf("%.2lf elevado a la %.2lf potencia es igual a %.2lf\n", base, exponente, resultado);

   return 0;
}
