
#include<stdio.h>

int main(){
    float f,c;

    printf("Enter the temp in Fahrentheit = ");
    scanf("%f",&f);
    
    c=(f-32)/1.8;
    printf("The temperature in celcius is %.1f",c);

     return 0;
}