#include<stdio.h>



struct date{
    int day;
    int month;
    int year;
};

int main(){

  
  struct  date d1;
   printf("Enter day momth year: ");
   scanf("%d%d%d", &d1.day, &d1.month, &d1.year);

   printf("\n--- Date Details ---\n");
   printf("Date: %d-%d-%d\n", d1.day, d1.month, d1.year);



   return 0;
}

