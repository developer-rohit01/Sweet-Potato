#include<stdio.h>


void ADD();
void SUB();
void MUL();
void DIV();
void FABO();
void SQR();
void CUBE();


int main(){
          int choice;

           do {
        printf("\n================ CALCULATOR BY ROHIT ================\n");
        printf("1.ADD\t2.SUB\t3.MUL\t4.DIV\t5.FABONACCI\t6.SQR\t7.CUBE\t8.EXIT\n");
        printf("===========================================================\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear leftover newline


          switch (choice) {
            case 1: ADD(); break;
            case 2: SUB(); break;
            case 3: MUL(); break;
            case 4: DIV(); break;
            case 5: FABO(); break;
            // case 6: SQR(); break;
            // case 7: CUBE(); break;
            case 8: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 8);

    return 0;
}



void ADD(){
      
     float a,b,result;
     printf("Enter the First Number = ");
     scanf("%f",&a);

     printf("Enter the Second Number = ");
     scanf("%f",&b);

     result=a+b;

     printf("Result = %.2f",result);
}



void SUB(){
      
     float a,b,result;
     printf("Enter the First Number = ");
     scanf("%f",&a);

     printf("Enter the Second Number = ");
     scanf("%f",&b);

     result=a-b;

     printf("Result = %.2f",result);
}



void MUL(){
      
     float a,b,result;
     printf("Enter the First Number = ");
     scanf("%f",&a);

     printf("Enter the Second Number = ");
     scanf("%f",&b);

     result=a*b;

     printf("Result = %.2f",result);
}


void DIV(){
      
     float a,b,result;
     printf("Enter the First Number = ");
     scanf("%f",&a);

     printf("Enter the Second Number = ");
     scanf("%f",&b);

     result=a/b;

     printf("Result = %.2f",result);
}



void FABO(){
      
  int n;
    int firstnum=0,secondnum=1,nextnum;
    printf("Enter the number to get Fabonacci Series = \a ");
    scanf("%d",&n);
    printf("\n");

    for (int i = 1; i < n ; i++)
    {
        printf("%d\t\a",firstnum);
        nextnum=firstnum+secondnum;
        firstnum=secondnum;
        secondnum=nextnum;
    }
    printf("\n");
}












