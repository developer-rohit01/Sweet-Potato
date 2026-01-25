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


struct contacts{
  char phone[20];
  char email[20];
  char Aadhaar[100];
};


// void showdate(struct date d[],int);
struct student Enterstd(int);
struct date givedate(int);
struct contacts condetails(int);
void Showstd(struct student s[],struct date d[],struct contacts c[],int);


int main(){

  struct student std[100];
  struct  date d[100];  
  struct contacts c[100];

  int i,k,n;
  
  printf("Enter the Total Student no: ");
  scanf("%d",&n);
  

  for(i=0;i<n;i++){
  std[i]= Enterstd(i);
  d[i]=givedate(i);
  printf("Fill the Contacts\n");
  c[i]=condetails(i);
  }

   Showstd(std,d,c,n);
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

struct contacts condetails(int i){
struct contacts c[100];

  printf("Enter Phone Number: ");
  scanf(" %[^\n]",c[i].phone);
   printf("Enter emai: ");
  scanf(" %[^\n]",c[i].email);
   printf("Enter Aadhaar : ");
  scanf(" %[^\n]",c[i].Aadhaar);

return c[i];
}


//Function definition for show
void Showstd(struct student std[],struct date d[],struct contacts c[],int n){
  for ( int i = 0; i < n; i++)
  {
      int k=i;
    printf("\nStudent %d\n",k+1);
    printf("Name: %s\n",std[i].name);
    printf("marks: %.2f\n",std[i].marks);
    printf("Rollno: %d\n",std[i].roll_no);
    printf("DOB: %d-%s-%d\n", d[i].day, d[i].month, d[i].year);
    printf("Phone No: %s\n Email: %s\n Aadhaar: %s\n",c[i].phone,c[i].email,c[i].Aadhaar);
  }
}

