#include<stdio.h>

int main(){
    int a,i;
    printf("Enter no of the srt and line= ");
    scanf("%d",&a);
    for(i=a;i>0;i--){
       for(int j=1;j<=i;j++){
            printf("* ");
    }
     printf("\n");
}
     return 0;
}