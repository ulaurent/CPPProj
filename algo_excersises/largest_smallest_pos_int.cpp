/* This program finds the smallest and largest number from a list of positive integers taken in from the user*/

//
// Created by BABO on 9/15/18.
//


#include <iostream>
#include <vector>


int main() {

    std::vector<int> v;
    int smallest = 0;
    int largest = 0;
    int number = 1;



    while (number != 0){

        std::cout<<"Give a Number? ";
        std::cin>>number;
        if(number > 0){
            v.push_back(number);
        }
    }

    std::cout<<"The size of the vector is "<< v.size()<<std::endl;
    for (auto x:v)
    {
        if(x>largest)
        {
            largest = x;
        }
    }
    std::cout<<"The largest number in the vector is "<<largest<<std::endl;

    std::vector<int>::iterator it;

    smallest = v[0];

    for (it = v.begin()+1; it != v.end(); ++it)
    {
            if(*it < smallest){
            smallest = *it;
        }
    }
    std::cout<<"The smallest number in the vector is "<<smallest<<std::endl;

}