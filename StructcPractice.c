#include<stdio.h>


struct student{
    char name[50];
    int roll_no;
    float marks;
};


struct date{
    int day;
    int month;
    int year;
};
struct date givedate();

int main(){
  
    struct student s1;
  printf("Enter Student Name: ");
  scanf("%s", s1.name);
  printf("Emter roll No: ");
  scanf("%d", &s1.roll_no); 
  printf("Enter Marks: ");
  scanf("%f", &s1.marks);
  
  // struct  date d1;  
  // d1=givedate();
  // printf("\n--- Date Details ---\n");
  // printf("Date: %d-%d-%d\n", d1.day, d1.month, d1.year);

  return 0;
}









struct date givedate(){
  struct date s1;
  printf("Enter day month year: ");
  scanf("%d%d%d", &s1.day, &s1.month, &s1.year);
}
