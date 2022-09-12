#include <stdio.h>

long factorial(long n)
{
    (n == 1) ? printf("%ld! = %ld\n", n, n) :
        printf("%ld! = %ld * %ld!\n", n, n, n - 1);
    return (n == 1) ? n * 1 : n * factorial(n - 1);
}

int main()
{
    long n;
    do {
        scanf("%ld", &n);
    } while (1 > n || 15 < n);

    printf("%ld\n", factorial(n));

    return 0;
}