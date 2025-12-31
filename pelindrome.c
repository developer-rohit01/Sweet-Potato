#include<stdio.h>
#include<string.h>
int main(){
    char ch[]={"ABABA"};
    int n=strlen(ch);
    int c=n/2;
    int j=n-1;
    int i;
    for( i=0;i<=c;i++){
      if(ch[i]==ch[j]){
      continue;
      }
      printf("i==%d",i);
      printf("j==%d",j);
      j--;
      if(i==j){
        break;
      }
    }
    if(i==j){
      printf("i==%d",i);
      printf("j==%d",j);
      printf("The number is pelindrome");
    }
    else{
      printf("The number is not pelindrome");
    }
   return 0;
}