#include<stdio.h>
#include<string.h>
int main(){
    char ch[]={"ABABAC"};
    int n=strlen(ch);
    int c=n/2;
    int j=n-1;
    int i;
    for( i=0;i<=c;i++){
      if(ch[i]==ch[j]){
      continue;
      }
      j--;
      if(i==j){
        break;
      }
    }
    if(i==j){
      printf("The String is pelindrome");
    }
    else{
      printf("The String is not pelindrome");
    }
   return 0;
}