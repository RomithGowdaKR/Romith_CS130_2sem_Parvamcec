#include<iostream>
using namespace std;
class BankAccount
{
    private:
    string holder_name;
    int ac_no;
    public:
    BankAccount(string name)
    {
    this->holder_name=name;
    this->ac_no=ac_no;
    cout<<"Constructor called for :"<<this->holder_name<<endl;
    }
    ~BankAccount()
    {
        cout<<"Destructor called for:"<< holder_name <<endl;
    }
};
int main()
{
    BankAccount s1("Romith");
    BankAccount s2("Bharath");
    BankAccount s3("Yashu");
    return 0;
}


        