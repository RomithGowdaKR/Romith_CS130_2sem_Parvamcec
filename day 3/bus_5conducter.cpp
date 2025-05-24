 v#include<iostream>
using namespace std;
class Bus{
    public:
    string direction;
    int no_of_passengers;
    Bus(string direction,int no_of_passengers)
    {
        cout<<"constructor is called automatically"<<endl;
        this->direction=direction;
        this->no_of_passengers=no_of_passengers;
    }
    void display()
    {       
        cout<<"direction:" <<this->direction <<endl;
        cout<<"no_of_passengersno_of_passengers:"<<this->no_of_passengers<<endl;
    }
};
int main()
{
    Bus b1("mohan",102);
    b1.display();
    return 0;
}



