#include<stdio.h>

int main()
{
    int contador;
    float s, s1 = 0, divisor = 1, dividendo = 1;

    while (contador <=48)
    {
        s = dividendo/divisor;
        if (s != 1 || s == 1);
        {
            s1 = s + s1;
            printf("%0.2f\n\n", s);
        }

        divisor = divisor+1;
        dividendo = dividendo+2;
        contador = contador+1;
        printf("%0.2f divisor\n\n", divisor);
        printf("%0.2f dividendo\n\n", dividendo);
    }
    printf("O valor de S e: %0.2f\n ", s1);
}

