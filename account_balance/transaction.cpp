#include "transaction.hpp"

using namespace std;

// Not including <string> becuase it is already included in transaction.hpp

Transaction::Transaction (int amt, std::string kind):amount(amt), type(kind) // Meaning anytime your use the type 'Transaction' it must include the two parameters
{
    // initalization syntax
    // the same as saying amount = amt
    // then the same as saying type = king
}

string Transaction::Report()
{
    string report;
    report += "  ";
    report += type;
    report += "  ";
    report += to_string(amount); // to_string found in std namespace
    
    return report;
}