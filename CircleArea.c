 #define PI 3.14
#include<stdio.h>

//Function declaration for circle 
float circle(int R){
 float Area=PI*R*R;

 return Area;
}



int main(){
      float C,S;
      printf("Enter the radius = ");
      scanf("%f",&C);
      //Function call and assign in Variable S 
      S=circle(C);
      printf("Area of cirlce is = %.2f",S);


    printf("\nPress Enter to exit...");
    getchar();
    getchar();
   return 0;
}
