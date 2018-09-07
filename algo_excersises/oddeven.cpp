/*Basic odd even program*/

#include <iostream>

int main()
{
    int userNum;

    std::cout<<"Enter your number: ";
    std::cin>>userNum;

    if((userNum % 2) == 1)
        std::cout<<"Your number is ODD\n";
    else
        std::cout<<"Your number is EVEN\n";
    
}
