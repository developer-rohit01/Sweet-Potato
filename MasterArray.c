#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // 1️⃣ Input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 2️⃣ Display
    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // 3️⃣ Sum + Average
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", (float)sum / n);

    // 4️⃣ Max & Min
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("\nMax = %d", max);
    printf("\nMin = %d", min);

    // 5️⃣ Searching
    int key, found = 0;
    printf("\n\nEnter number to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Not found");

    // 6️⃣ Reverse display
    printf("\nReversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // 7️⃣ Sorting (ascending) — bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nPress Enter to exit...");
    getchar();
    getchar();


    return 0;
}
