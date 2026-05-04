#include <stdio.h>
#include <stdlib.h>
int factorizar(int x);
int factorizar2(int x, int y);
int main()
{
    int n,m, resu;
    printf("ingrese el primer numero: ");
    scanf("%d",&n);
    printf("ingrese el segundo numero: ");
    scanf("%d",&m);
    if((n>=0)&&(m>=n))
    {
        resu=factorizar2(n,m);
        printf("el resultado es: %d",resu);
    }
    else
    {
        printf("Los numeros son ingresados no son validos\n ");
        printf("El primer numero tiene que ser mayor a 0\n El segundo no puede ser memor e igual al primero");
    }
;
return 0;
}
