#include<iostream>
using namespace std;
class Calculator
{
    public:
    double num1,num2;
    char op;
    void getInput()
    {
    cout <<"Enter the two number"<< endl;
    cout <<"Enter the num1"<< endl;
    cin>>num1;
    cout<<"Enter the operator(+,-,*,/)"<<endl;
    cin>>op;
    cout<<"Enter the num2"<<endl;
    cin>>num2;
    }
    void display(){
    switch(op)
    {
        case '+':
        cout<<"Result"<<num1+num2<<endl;
        break;
        case '-':
        cout<<"Result"<<num1-num2<<endl;
        break;
        case '*':
        cout<<"Result"<<num1*num2<<endl;
        break;
        case '/':
        if (num2 != 0)
        cout<<"Result"<<num1/num2<<endl;
        else
        cout<<"error"<<endl;   
        break;
        default:
        cout<<"invalid operator"<<endl;
    }
    }

};
int main()
{
    Calculator calc;
    calc.getInput();
    calc.display();
    return 0;
}