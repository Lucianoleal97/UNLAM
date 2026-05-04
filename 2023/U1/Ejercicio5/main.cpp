#include <iostream>

using namespace std;
int fibonachi(int a);
int mostrarResultado(int a,int num);
int main()
{
    int num,resf;
    printf("ingrese un numero: ");
    scanf("%d",&num);
    resf=fibonachi(num);
    mostrarResultado(resf, num);

    return 0;
}
