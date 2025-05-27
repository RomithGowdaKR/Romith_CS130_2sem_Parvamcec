#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    complex()
    {
        this->real=0;
        this->img=0;
    }
    complex(int real, int img)
    {
        this->real=real;
        this->img=img;
    }
    void display()
    {
        cout<<"The result is :"<<real<<endl;
    }
    Complex temp;

}