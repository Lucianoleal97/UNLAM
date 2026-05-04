#include <stdio.h>
void cociente(int a,int b)
{
    int resu;
    resu=a/b;
    printf("el cociente es: %d\n",resu);
}

void resto(int a, int b)
{
    float resu;
    resu=a%b;
    printf("el resto es: %.0f\n",resu);
}
void verificar (int a,int b)
{
    if(b==0)
    {
        printf("ERROR el segundo numero no puede ser 0");
    }
    else
    {
        cociente(a,b);
        resto(a,b);
    }
}
