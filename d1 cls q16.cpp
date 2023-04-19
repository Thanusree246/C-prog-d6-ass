#include<stdio.h>

int fibonacci(int n);

int main()
{
    int n, fib;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    fib = fibonacci(n);

    printf("The %dth Fibonacci number is: %d", n, fib);

    return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
