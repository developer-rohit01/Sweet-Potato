#include<stdio.h>
#include<string.h>
struct employee {
    char name[50];
    int id;
    float salary;
};

updateEmployeeSalary(struct employee *emp) {
    // strcpy(emp->name,"Satwik"); // Updating name
    printf("enter name to update name:");
    scanf(" %[^\n]",emp->name);
}
int main(){
  struct employee emp;
  printf("Enter Employee Name: ");
  scanf("%s",emp.name);
  printf("Enter Employee ID: ");
  scanf("%d",&emp.id);
  printf("Enter Employee Salary: ");
  scanf("%f",&emp.salary);

  
  printf("\n--- Employee Details ---\n");
  printf("Name: %s\nID: %d\nSalary: %.2f\n", emp.name,emp.id,emp.salary);
  updateEmployeeSalary(&emp);
  
  printf("\n--- Updated Employee Details ---\n");
  printf("Name: %c\nID: %d\nSalary: %.2f\n", emp.name,emp.id,emp.salary);


   return 0;
}