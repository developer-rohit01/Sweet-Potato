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

struct student Enterstd(int);

void ShowStd(struct student,int);


int main(){
  // struct  date d1;  
  // d1=givedate();
  // showdate(d1);
  struct student std[100];
  int i,k,n;

  printf("Enter the Total Student no: ");
  scanf("%d",&n);
  

  for(i=0;i<n;i++){
  std[i]= Enterstd(i);
  }

  for(i=0;i<n;i++){
    ShowStd(std,i);
  }


  


//   for(i=0;i<n;i++){

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


struct student Enterstd(int j){
  
    struct student ltd[100];
    int k=j; 
    printf("\nStudent %d\n",k+1);
    printf("Enter Name: ");
    scanf(" %[^\n]",ltd[j].name);
    printf("Enter Rollno: ");
    scanf("%d",&ltd[j].roll_no);
    printf("Enter Marks: ");
    scanf("%f",&ltd[j].marks);

  return ltd[j];
}

void Showstd( struct student ltd[],int i){
    
  
      int k=i;
    printf("\nStudent %d\n",k+1);
    printf("Student Name: %s\n",ltd[i].name);
    printf("Student marks: %.2f\n",ltd[i].marks);
    printf("Student Rollno: %d\n",ltd[i].roll_no);
}