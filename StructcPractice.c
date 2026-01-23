#include<stdio.h>


struct student{
    char name[50];
    int roll_no;
    float marks;
};


struct date{
    int day;
    char month[20];
    int year;
};
struct date givedate();
void showdate();

int main(){
  
  // struct student s1;
  // printf("Enter Student Name: ");
  // scanf("%s", s1.name);
  // printf("Emter roll No: ");
  // scanf("%d", &s1.roll_no); 
  // printf("Enter Marks: ");
  // scanf("%f", &s1.marks);

  //   printf("\n--- Student Details ---\n");


  // printf("Name: %s\n", s1.name);      
  // printf("Roll No: %d\n", s1.roll_no);
  // printf("Marks: %.2f\n", s1.marks);
  
  struct  date d1;  
  d1=givedate();

  showdate(d1);

  return 0;
}









struct date givedate(){
  struct date s1;
  printf("Enter day month year: ");
  scanf("%d %s %d", &s1.day, &s1.month, &s1.year);
  return s1;
}


void showdate(struct date s1){
  printf("\n--- Date Details ---\n");
  printf("Date: %d-%s-%d\n", s1.day, s1.month, s1.year);


}