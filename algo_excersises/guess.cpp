/* Basic guess that number game!*/

#include <iostream>

int main ()
{
    int number = 5;
    int numIn;

    while (numIn != number) {
        
        std::cout << "Enter your number:\t\n";
        std::cin >> numIn;
        std::cout << "your number is\t\n" << numIn;
        
        if (numIn < number)
            std::cout << "\nGo Higher\n";
        else if (numIn > number)
            std::cout << "\nGo Lower\n";
        else
            std::cout << "\nYou got it!\n";
    }
    
}