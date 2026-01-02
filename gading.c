#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the marks to be grade = ");
    scanf("%d",&a);

    if(a>90 && a<=100){
        b=1;
    }
    else if(a>80 && a<=90){
        b=2;
    }
    else if(a>70 && a<=80){
        b=3;
    }
    else if(a>50 && a<=70){
        b=4;
    }
   else if(a>33 && a<=50){
        b=5;
    }
    else if(a>0 && a<=33){
        b=6;
    }
    else{
        printf("invalid Marks \n");
    }

    switch(b){
        case 1: 
             printf("Marks = %d\tGrade A+",a);
             break;
        case 2:
             printf("Marks = %d\tGrade A",a);
             break;
        case 3:
             printf("Marks = %d\tGrade B",a);
             break;
        case 4: 
             printf("Marks = %d\tGrade C",a);
             break;
        case 5:
             printf("Marks = %d\tGrade D",a);
             break;
        case 6:
             printf("Marks = %d\tFail",a);
             break;
    }
     return 0;
}