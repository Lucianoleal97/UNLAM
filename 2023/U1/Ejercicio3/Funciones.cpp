int Potencia(int x,int y)
{
    int resu=1,i;
    for (i=0;y>i;i++)
    {
        resu*=x;
    }
    return resu;
}

float Tolerancia (int x,int TOL)
{
 int cont=0, cont2=1;
 float ex=1,ex1;
 while(ex<TOL)
 {
    cont++;
    ex1=(Potencia(x,cont));
    ex=ex+ex1/(cont2*=cont);
 }
 return ex;
}

