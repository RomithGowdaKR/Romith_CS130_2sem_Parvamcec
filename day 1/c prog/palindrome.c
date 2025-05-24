#include<stdio.h>
int main(){
    int num=0,rev=0,digit=0,org=0;  
    printf("enter the number");
    scanf("%d",&num);
    org=num;
    while(num!=0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(org==rev){
        printf("it is palindrome");
    }else{
        printf("not palindrome");
    }
    return 0;
}

