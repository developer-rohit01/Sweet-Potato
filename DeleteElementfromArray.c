#include<stdio.h>

int main(){
  int ar[]={1,2,33,4,5};
  int n=sizeof(ar)/sizeof(ar[0]);
  int val=33;
  int k=0;
 
  for(int i=0;i<n;i++){
    if(ar[i]!=val){   
      ar[k]=ar[i];
      k++;
    }
  }

  
  printf("Array after removal: ");
  for(int i=0;i<n-1;i++){
    printf("%d ",ar[i]);
  }
   return 0;
}