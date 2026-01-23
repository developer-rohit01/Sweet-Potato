#include<stdio.h>



struct date{
    int day;
    int month;
    int year;
};
struct date givedate();

int main(){
  struct  date d1;

  d1=givedate();

   printf("\n--- Date Details ---\n");
   printf("Date: %d-%d-%d\n", d1.day, d1.month, d1.year);
   return 0;
}


struct date givedate(){
  struct date s1;
  printf("Enter day month year: ");
   scanf("%d%d%d", &s1.day, &s1.month, &s1.year);
}