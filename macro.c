#include<stdio.h>
#define PI 3.14

float circle(int R){
 float Area=PI*R*R;

 return Area;
}



int main(){
      float C,S;
      printf("Enter the radius = ");
      scanf("%f",&C);

      S=circle(C);
      printf("Area of  y cirlce is = %.2f",S);

    printf("\nEnter to Exit...");
    getchar();
    getchar();

   return 0;
}