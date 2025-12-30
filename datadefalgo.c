#include<stdio.h>

int main(){
      float X,Y,M,N;
      int length;
      printf("Enter the Value of intitial X= ");

      scanf("%f",&X);
      printf("Enter the initial Y= ");
      scanf("%f",&Y);
      printf("Enter the Value of Final X= ");
      scanf("%f",&M);
      printf("Enter the Final Y= ");
      scanf("%f",&N);
      printf("(%.2f,%.2f)----(%.2f,%.2f)\n",X,Y,M,N);

      float Dx=M-X;
      float Dy=N-Y;

      if(Dx>Dy){
        length=Dx;
      }
      else{
        length=Dy;
      }
      float x[length+1];
      float y[length+1];

      float dx=Dx/length;
      float dy=Dy/length;
      x[0]=X;
      y[0]=Y;
      for(int i=1;i<=length;i++){
             x[i]=x[i-1]+dx;
             y[i]=y[i-1]+dy;
      }
      for(int i=0;i<=length;i++){
        printf("\n");
         printf("(%.2f , %.2f)\n", x[i], y[i]);
      }
   return 0;
}