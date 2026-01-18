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




int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nFactorial of %d = %d", num, factorial(num));
    printf("\nSum of digits of %d = %d\n", num, sumDigits(num));
    printf("Count of digits in %d = %d\n", num, countDigits(num));
    return 0;
}
