#include<stdio.h>

unsigned long long factorial(int n);

int main()
{
    int n;
    unsigned long long fact;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    fact = factorial(n);

    printf("Factorial of %d = %llu", n, fact);

    return 0;
}

unsigned long long factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}
