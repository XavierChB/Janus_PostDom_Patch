#include <stdio.h>
#include <stdlib.h>

#define N 0x8000000

int *a, *b;

int main(void)
{
    int i;
    long sum = 0;

    a = (int *)malloc(sizeof(int)*N);
    b = (int *)malloc(sizeof(int)*N);

    for(i = 0; i < N; i++)
    {
        b[i] = i;
    }

    for(i = 0; i < N/3; i++)
    {
        a[3*i+2] = a[2*i+4] + i;
    }

    for(i = 0; i < N; i++)
    {
        sum += a[i];
    }

    printf("Total %ld\n", sum);

    return 0;
}
