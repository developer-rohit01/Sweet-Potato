#include<stdio.h>
#include<string.h>
int main(){
         char s[100];

         printf("Enter the Sentence here = ");
         scanf(" %[^\n]%*c",&s);

         
         int i = strlen(s) - 1;

         while (i >= 0 && s[i] == ' ') {
           i--;
             }

        int count = 0;

         while (i >= 0 && s[i] != ' ') {
         count++;
          i--;
          }

          printf("The last word length is = %d",count);
       return 0;

}