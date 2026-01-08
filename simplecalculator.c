#include<stdio.h>
#include<conio.h>
#include<string.h>
//trying to add this file on the git

int main(){
     float a,b;
     char ch;

      
     printf("Enter The First value: ");
     scanf("%f",&a);
     printf("Enter the Second value: ");
     scanf("%f",&b);
     printf("Choose the Operator '+' '-' '*' '/' \n ");
     scanf(" %c",&ch);

    
     if(ch=='+'){
        printf("%.1f + %.1f = %.1f",a,b,a+b);
     }
     
     else if(ch=='-'){
        printf("%.1f - %.1f = %.1f",a,b,a-b);
     }
     else if(ch=='*'){
        printf("%.1f * %.1f = %.1f",a,b,a*b);
     }
     else if(ch=='/'){
        printf("%.1f / %.1f = %.1f",a,b,a/b);
     }
     else {
        printf("Invalid Opeator Selected");
     }

    getch();

     return 0;
     
}