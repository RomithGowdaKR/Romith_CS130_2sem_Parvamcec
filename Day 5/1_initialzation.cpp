#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int roll_num;
    public:
    Student(string name,int roll): name(name), roll_num(roll)
    {
        cout<<"Counstructer is called"<<endl;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll Number:"<<roll_num<<endl;
    }
};
int main()
{
    Student s1("pavan",1023);
    s1.display();
}