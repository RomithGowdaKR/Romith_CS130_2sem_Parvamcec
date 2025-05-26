#include<iostream>
using namespace std;
class Employee
{
    private:
    string emp_name;
    int work_hour;
    public:
    Employee(string name,int work): emp_name(name),work_hour(work)
    {
        cout<<"Counstructer is called"<<endl;
    }
    void display()
    {
        cout<<"Emp Name:"<<emp_name<<endl;
        cout<<"Work Hour:"<<work_hour<<endl;
    }
};
int main()
{
    Employee e1("pavan",1023);
    e1.display();
}