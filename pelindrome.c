#include <stdio.h>
#include <string.h>

int main() {
    char ch[] = "ABABAC";
    int i = 0;
    int j = strlen(ch) - 1;
    int isPalindrome = 1;

    while (i < j) {
        if (ch[i] != ch[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is palindrome");
    else
        printf("The string is not palindrome");

    return 0;
}
