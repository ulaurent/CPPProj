#include <iostream>
#include <vector>



class Account 
{
    private:
        double balance;
        vector <int> transactions;
    public:
        double deposit (double depositIn);
        double withdraw (double withdrawIn);
        void report ();
};

Accout::Account
{
    balance = 0.0;
    
    for (int i = 0; i < 10; i++)
        transactions[i] = 0;
}

double Account::deposit (double depositIn)
{
    balance += depositIn;
    
    return balance;
}

double Account::withdraw (double withdrawIn)
{
    balance -= withdrawIn;
    
    return balance;
}

void Account:: report()
{
    std::cout<<"Your account balance currently:\t"<<balance;
}