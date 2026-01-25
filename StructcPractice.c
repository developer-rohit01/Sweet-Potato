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


struct date givedate(int);
void showdate(struct date d[],int);

struct student Enterstd(int);

void Showstd(struct student s[],struct date d[],int);


int main(){

  struct student std[100];
  struct  date d[100];  
  int i,k,n;
  
  printf("Enter the Total Student no: ");
  scanf("%d",&n);
  

  for(i=0;i<n;i++){
  std[i]= Enterstd(i);
  d[i]=givedate(i);
  }

   Showstd(std,d,n);
  // showdate(d,n);

  return 0;

}


struct date givedate(int i){
  struct date s[100];
  int l =i;
  printf("Enter Date of Birth: ");
  scanf("%d %s %d", &s[i].day, &s[i].month, &s[i].year);
  return s[i];
}





//Function definition for Enter entry
struct student Enterstd(int i){
  struct student std[100];
  int k=i; 
  printf("\nStudent %d\n",k+1);
  printf("Enter Name: ");
  scanf(" %[^\n]",std[i].name);
  printf("Enter Rollno: ");
  scanf("%d",&std[i].roll_no);
  printf("Enter Marks: ");
  scanf("%f",&std[i].marks);
  
  return std[i];
}





// void showdate(struct date d[],int n){
//   printf("\n--- Date Details ---\n");
//   for(int i=0;i<n;i++){
  
// }
// }



//Function definition for showdate
void Showstd(struct student std[],struct date d[],int n){
  for ( int i = 0; i < n; i++)
  {
      int k=i;
    printf("\nStudent %d\n",k+1);
    printf("Name: %s\n",std[i].name);
    printf("marks: %.2f\n",std[i].marks);
    printf("Rollno: %d\n",std[i].roll_no);
    printf("DOB: %d-%s-%d\n", d[i].day, d[i].month, d[i].year);
  }
}