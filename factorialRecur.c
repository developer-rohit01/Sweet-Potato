#include<stdio.h>
int fact(int n){
  if(n==0){
    return 1;
  }
  return n * fact(n - 1);
}
int main(){
  int n;
  printf("Enter the number to Get Factorial: ");
  scanf("%d",&n);
  // Calculate factorial
  int c = fact(n);
  printf("Factorial of %d is %d\n", n, c);

   return 0;
}