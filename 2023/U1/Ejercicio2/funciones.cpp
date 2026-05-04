int factorizar( int n)
{
    int i,resultado=1;
    for(i=1;n>=i;i++)
    {
        resultado*=i;
    }
    return resultado;
}

int factorizar2(int n,int m)
{
    int resultado;
    resultado=factorizar(m)/(factorizar(n)*factorizar(m-n));
    return resultado;
}
