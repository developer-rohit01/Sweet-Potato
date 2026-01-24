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
void showdate(struct date);

struct Student Enterstd();
void ShowStd(struct student);


int main(){
  // struct  date d1;  
  // d1=givedate();
  // showdate(d1);
  struct student std[100];
  int i,k,n;
  std[]= Enterstd();




  


//   for(i=0;i<n;i++){
//     k=i;
//     printf("\nStudent %d\n",k+1);
//     printf("Student Name: %s\n",std[i].name);
//     printf("Student marks: %.2f\n",std[i].marks);
//     printf("Student Rollno: %d\n",std[i].roll_no);
//   }

  
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


struct student Enterstd(){
  
    struct student ltd[100];
    int n;
     printf("Enter the total students: ");
     scanf("%d",&n);


      for(int i=0;i<n;i++){
    int k=i;
    printf("\nStudent %d\n",k+1);
    printf("Enter Name: ");
    scanf(" %[^\n]",ltd[i].name);
    printf("Enter Rollno: ");
    scanf("%d",&ltd[i].roll_no);
    printf("Enter Marks: ");
    scanf("%f",&ltd[i].marks);
  }

  return ltd[];
}