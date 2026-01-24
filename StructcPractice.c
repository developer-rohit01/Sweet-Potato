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
  
  struct student std[5];
  int i,k;
  struct  date d1;  
  d1=givedate();
  showdate(d1);


  for(i=0;i<5;i++){

    k=i;
    printf("Student %d\n",k+1);
    printf("Enter Name: ");
    scanf(" %[^\n]",std[i].name);
    printf("Enter Rollno: ");
    scanf("%d",&std[i].roll_no);
    printf("Enter Marks: ");
    scanf("%f",&std[i].marks);
  }
  
  for(i=0;i<5;i++){
    k=i;
    printf("Student %d\n",k+1);
    printf("Student Name: %s",std[i].name);
    printf("Student marks: %d",std[i].marks)

  }

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