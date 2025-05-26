#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    public:
    student (string name)
    {
        this->name=name;
        cout<<"Constructor called for :"<<this->name<<endl;
    }
    ~student()
    {
        cout<<"Destructor called for:"<<name <<endl;
    }
};
int main()
{
    student s1("Romith");
    student s2("Bharath");
    student s3("Yashu");
    student s4("Bhavana");
    student s5("Swapna");
    student s6("Dakshitha");
    student s7("My friends");
    return 0;
}