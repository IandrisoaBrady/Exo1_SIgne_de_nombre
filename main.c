#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrez un nombre entier n: \n");
    scanf("%d",&n);
    if(n>=0)
    {
    printf("Le nombre %d est positif\n",n);
    }
    else{
    printf("Le nombre %d est negatif\n",n);
    }
}
