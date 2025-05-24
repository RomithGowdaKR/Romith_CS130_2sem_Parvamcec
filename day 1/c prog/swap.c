#include<stdio.h>
int main(){
    int a,b,temp;
    printf(" the numbers are a:");
    scanf("%d",&a);
    printf(" the numbers are b:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swap num is:%d %d",a,b);
    return 0;
}