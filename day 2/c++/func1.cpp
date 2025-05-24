#include<iostream>
using namespace std;
int add(int num1,int num2);
int main(){
    int a=5;
    int b=4;
    int result=add(a,b);
    cout<<"RESULT:"<<result<<endl;
    int c=5;
    int d=6;
    int result1=add(c,d);
    cout<<"RESULT2:"<<result1<<endl;
}
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}