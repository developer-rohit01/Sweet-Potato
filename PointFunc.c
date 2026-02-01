#include<stdio.h>
void swap(int *p,int *q);
int main(){
    int a=6,b=7;

    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);

   return 0;
}

void swap(int *p,int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}