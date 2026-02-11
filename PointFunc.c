#include<stdio.h>

// Function prototype for swapping two numbers using pointers
void swap(int *p,int *q);


int main(){
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d\n%d",&a,&b);

    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);

   return 0;
}

// Function to swap two numbers using pointers
void swap(int *p,int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}