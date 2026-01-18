#include<stdio.h>
 int fact(int num);


int fact(int num){
  if(num==0){
    return 1;
  }
  return num * fact(num - 1);
}

int main(){
  int n;
  printf("Enter the number to Get Factorial: ");
  scanf("%d",&n);
  
  int c = fact(n);
  printf("Factorial of %d is %d\n", n, c);
     return 0;
}
