#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    //  FOR LOOP — print 1 to n
    printf("\nFor loop (1 to %d):\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    //  WHILE LOOP — sum of 1 to n
    int i = 1, sum = 0;
    printf("\n\nWhile loop (sum 1 to %d):\n", n);
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);

    //  DO-WHILE — runs at least once
    int x;
    printf("\nDo-while example:\n");
    do {
        printf("Enter positive number (0 to stop): ");
        scanf("%d", &x);
    } while (x > 0);

    //  NESTED FOR LOOP — simple pattern
    printf("\nNested loop (triangle pattern):\n");
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= r; c++) {
            printf("* ");
        }
        printf("\n");
    }

    //  BREAK — stop loop early
    printf("\nBreak example (stop at 5):\n");
    for (int k = 1; k <= 10; k++) {
        if (k == 5)
            break;
        printf("%d ", k);
    }

    // CONTINUE — skip an iteration
    printf("\n\nContinue example (skip 5):\n");
    for (int k = 1; k <= 10; k++) {
        if (k == 5)
            continue;
        printf("%d ", k);
    }
     printf("\nPress Enter to exit...");
    getchar();
    getchar();

    return 0;
}
