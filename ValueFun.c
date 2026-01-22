#include<stdio.h>
int sum(int n,int c);

int main(){
   int a,b;
   printf("Enter the value of n: ");

   scanf("%d",&a);
   printf("Enter the value of b: ");

    scanf("%d",&b);

    int c= sum(a,b);

    printf("The n is : %d and b is : %d",a,c);

   return 0;
}

int sum(int n,int c){
    n=n+1;
    c=c+1;
    return n;

    
}
