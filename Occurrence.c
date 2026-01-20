#include <stdio.h>

void Occur(int a,int b);

int main(){
  int a,b;
  printf("********** Occurrence of a digit in a number ASCAT Question **********\n");
  printf("Enter the number you want to find its count: \a");
  scanf("%d",&a);
  printf("Enter the Number in which you want to find the count: \a");
  scanf("%d",&b);
  
  Occur(a,b);
  
  printf("\nPress Enter to exit...");
  getchar();

  getchar();
  return 0;
}


void Occur(int a, int b){
  int count = 0;
  while(b != 0){
    int digit = b % 10;
    if(digit == a){
      count++;
    }
    b = b / 10;
  }
  printf("The digit %d has occurred %d times in the given number.\n", a, count);
}