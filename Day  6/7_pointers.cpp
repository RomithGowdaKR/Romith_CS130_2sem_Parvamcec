#include<iostream>
using namespace std;
class Student 
{
private:
    string name;
    int roll_num;

public:
    void input()
    {
        cout<<"Enter student name:"<<endl;
        cin >> name;
        cout<<"Enter studemt roll_num:"<<endl;
        cin>>roll_num;
    }
    void display()
    {
        cout<<"Student name:"<<name<<endl;
        cout<<"Sudent roll_num:"<<roll_num<<endl;


    }
};
int main()
{
    Student students[3];

    for (int i = 0; i<3; i++)
    {
        students[i].input();
        students[i].display();
    }

    return 0;
}