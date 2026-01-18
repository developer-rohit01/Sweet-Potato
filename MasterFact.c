#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}


int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}


int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int power(int x, int n)
{
    if (n == 0)
        return 1;

    return x * power(x, n - 1);
}


int main()
{
    int num, base, exp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nFactorial of %d = %d", num, factorial(num));
    printf("\nSum of digits = %d", sumDigits(num));
    printf("\nTotal digits = %d", countDigits(num));

    printf("\n\nEnter base and exponent: ");
    scanf("%d %d", &base, &exp);

    printf("Power = %d", power(base, exp));

    printf("\n Enter to exit");
    getchar();  
    getchar();

    return 0;
}
