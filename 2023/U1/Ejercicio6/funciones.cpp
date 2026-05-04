#include <stdio.h>
int Potencia(int x,int y)
{
    int resu=1,i;
    for (i=0;y>i;i++)
    {
        resu*=x;
    }
    return resu;
}
int Factorizar( int n)
{
    int i,resultado=1;
    for(i=1;n>=i;i++)
    {
        resultado*=i;
    }
    return resultado;
}
float Negativo(float ex2,int cont2)
{
    if(cont2%2==0)
    {

    }
    else
    {
      ex2=ex2*-1;
    }
}

float Tolerancia (int x,int TOL)
{
 int cont=1,cont2=0;
 float ex=x,ex1,ex2;
 while(ex<TOL)
 {
    cont++;
    cont++;
    cont2++;
    ex1=(Potencia(x,cont));
    printf("\tP %f\n",ex1);
    ex2=ex1/Factorizar(cont);
    printf("\t\tF %f\n",ex2);
    ex=ex+Negativo(ex2,cont2);
    printf("\t\t\tEX %f\n",ex);
 }
 printf("contador %d",cont2);
 return ex;
}
