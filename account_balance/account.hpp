/* where we will write our class, but not the functions 
the that we have declared as private members
of the class. */
#include <vector>
#include <string>

#include "transaction.hpp"

class Account 
{
    private:
        int balance;
        std::vector <Transaction> log; // A vector of type transactions called log 
    public:
        Account(); // Constructors have no type specified
        std::vector<std::string> Report(); // A report function that returns a vector of strings
        bool deposit (int amt); // Takes an int amt and returns a true or false
        bool withdraw (int amt);
};
