#include<iostream>
using namespace std;
class Bus{
public:
    string direction;
    int no_of_passengers;
};
int main()
{
    Bus b1;
    b1.direction="Bar";
    b1.no_of_passengers=101;
    cout<<"direction:"<<b1.direction<<endl;
    cout<<"no_of_passengers:"<<b1.no_of_passengers<<endl;
    return 0;
}