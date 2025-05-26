#include<iostream>
using namespace std;
class ATM
{
    private:
    int balance;
    bool verifypin(int pin)
    {
        return pin == 1234;
    }
    void display()
    {
        cout<<"balance Amount:"<<this->balance<<endl;
    }
    public:
    ATM(int balance)
    {
        this->balance = balance;   
    }
    void withdraw(int amount, int pin)
    {
        bool res = verifypin(pin);
        if(res)
        {
            if(amount > 0)
            {
                if(amount > balance)
                {
                    cout<<"insufficient balance"<<endl;
                }
                else
                {
                    balance==amount;
                    display();
                }
                else
                {
                    cout<<"invalid amount";
                }
            }
        }
    }
};

int main()
        {
            ATM a1(50000);
            a1.withdraw(10000,12348);
            return 0;
        }