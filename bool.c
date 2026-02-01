#include<stdio.h>

#include<stdbool.h>
#define false 1
#define true 0
bool isPalindrome(int x);
int main(){
  _Bool result =isPalindrome(122);
   printf("The result is %d\n",result);
   return 0;
}

bool isPalindrome(int x) {
    if (x < 0) return false;
    double num=0;
    int y=x;

    
    while(x !=0){
        int last = x%10;
        num=num * 10 +last;
        x= x/10;
    }

    if(y==num){
        return true;
    }else{
        return false;
    }
}


