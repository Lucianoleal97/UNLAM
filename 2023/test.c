#include <stdio.h>
int main()
{
    int numero[]={1,2,3,4,5};
    int *dir_numero;
    dir_numero=numero;
    for (int i=0;i<5;i++)
    {
        printf("Elemento del vector: %d\n",*dir_numero++);
    }
    return 0;
}
