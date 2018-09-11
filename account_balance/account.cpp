
#include "account.hpp"

using namespace std; // Only use in cpp file where functions will be written

Account::Account():balance(0) // Initialize balance variable to zero
{
    //balance = 0.0; // two ways to write it
    
    // Do not have to initialize vector log because its already an empty vector
    
}


vector<string> Account::Report()
{
    vector <string> report; // New vector type report within this function only, local variable
    report.push_back("Balance is: " + to_string(balance)); //to_string turns the balance integer to vector report
    report.push_back("Transactions: "); // Adds this sentence to the vector report;
    
    // A 'ranged for' since log is a vector
    // For every 't' in that vector, call the report function
    for(auto t:log)
        {
            report.push_back(t.Report()); // Report() function formats the type and amount of every 't' in the vector log
        }
        
        report.push_back("-----------");
        
        return report;
    
}


bool Account::deposit (int amt)
{   if (amt >= 0)
    {
    balance += amt;
    log.push_back(Transaction(amt, "Deposit"));
    return true;
    }
    else
    {
        return false;
    }
}

bool Account::withdraw (int amt)
{
    if(amt >= 0){
        
        if(balance > amt)
        {
            balance -= amt;
            log.push_back(Transaction(amt, "Withdraw"));
            return true;
        }
        else
        {
            return false;
        }
       
       else
       {
        return false;   
       }
        
    }
    
}

