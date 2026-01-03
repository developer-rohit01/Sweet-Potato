#include <stdio.h>

int fib(int n)
{
    if (n == 0)      // base case 1
        return 0;
    if (n == 1)      // base case 2
        return 1;

    return fib(n - 1) + fib(n - 2);   // recursive case
}


int main()
{
    int n;
    printf("Enter number to get fabonacci series = ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}
