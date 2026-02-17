#include<stdio.h>

int main(){
  int ar[]={1,2,34,4,5};
  int n=sizeof(ar)/sizeof(ar[0]);
  int val=34;
  int k=0;
 
  for(int i=0;i<n;i++){
    if(ar[i]!=val){   
      ar[k]=ar[i];
      k++;
    }
  }

  
  printf("Array after removal: ");
  for(int i=0;i<n+3;i++){
    printf("%d ",ar[i]);
  }
   return 0;
}