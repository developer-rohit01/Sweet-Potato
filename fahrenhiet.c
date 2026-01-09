
#include<stdio.h>
void celtofah();
void fahtocel();

void fahtokel();
void keltofah();
void celtokel();
void keltocel();




int main(){

           int choice;
           do{
        printf("\n================================= TEMP Scale CONVERSION === DEVLOPER---> ROHIT ==========================\n\n");
        printf("\t1.Celcius --> Fahrenheit\t2.Fahrenheit --> Celcius\t3.Fahrenheit --> Kelvin\n\n\t4.Kelvin --> Fahrenheit\t");
        printf("\t5.Celcius --> Kelvin\t\t6.Kelvin --> Celcius\t\n\n\t\t\t\t\t\t7.Exit\n");
        printf("=========================================================================================================\n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        getchar();

    switch (choice) {
            case 1: celtofah(); break;
            case 2: fahtocel(); break;
            case 3: fahtokel(); break;
            case 4: keltofah(); break;
            case 5: celtokel(); break;
            
            case 7: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
           }
          
          }while (choice != 7);
           
     return 0;
}




void celtofah(){
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
}



void fahtocel(){
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
}

void fahtokel(){
    float fahrenheit, kelvin;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    kelvin = (fahrenheit - 32) * 5/9 + 273.15;
    printf("%.2f Fahrenheit = %.2f Kelvin\n", fahrenheit, kelvin);
}


void keltofah(){
    float kelvin, fahrenheit;
    printf("Enter temperature in Kelvin: ");
    scanf("%f", &kelvin);
    fahrenheit = (kelvin - 273.15) * 9/5 + 32;
    printf("%.2f Kelvin = %.2f Fahrenheit\n", kelvin, fahrenheit);
}

void celtokel(){
    float celsius, kelvin;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf("%.2f Celsius = %.2f Kelvin\n", celsius, kelvin);
}