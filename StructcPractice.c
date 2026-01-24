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
  
  struct student std[100];
  int i,k,n;
  // struct  date d1;  
  // d1=givedate();
  // showdate(d1);

 printf("Enter the total students: ");
 scanf("%d",&n);

  for(i=0;i<n;i++){

    k=i;
   
    printf("\nStudent %d\n",k+1);
    printf("Enter Name: ");
    scanf(" %[^\n]",std[i].name);
    printf("Enter Rollno: ");
    scanf("%d",&std[i].roll_no);
    printf("Enter Marks: ");
    scanf("%f",&std[i].marks);
  }
  
  for(i=0;i<n;i++){
    k=i;
    printf("\nStudent %d\n",k+1);
    printf("Student Name: %s\n",std[i].name);
    printf("Student marks: %.2f\n",std[i].marks);
    printf("Student Rollno: %d\n",std[i].roll_no);
  }

  
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