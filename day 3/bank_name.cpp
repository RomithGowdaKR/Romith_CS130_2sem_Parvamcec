#include<iostream>
using namespace std;
class BankAccount{
public:
     string holder_name;
     int ac_no;
};
int main()
{
    BankAccount b1;
    b1.holder_name="bhav";
    b1.ac_no=101;
    cout<<"holder name:"<<b1.holder_name<<endl;
    cout<<"account number:"<<b1.ac_no<<endl;
    return 0;
}