//
// Created by BABO on 9/15/18.
//

#include "Grades.h"

void Grades::setGrades() {
        std::cout<<"Enter your first grade?\t";
        std::cin>>grade[0];
        std::cout<<"Enter your second grade?\t";
        std::cin>>grade[1];
        std::cout<<"Enter your third grade?\t";
        std::cin>>grade[2];
        std::cout<<"Enter your fourth grade?\t";
        std::cin>>grade[3];
       // std::cout<<"\n";
    }

double Grades::average() {
    int sum = 0;
    int numberOfGrades = 0;
    for (auto x:grade)
    {
        sum += x;
        numberOfGrades ++;
    }

    return (sum / numberOfGrades);
    //std::cout<<"num of grades: "<<numberOfGrades;
}

void Grades::display() {
    std::cout<< "Display of Grades"<<"\n\t"<<grade[0]<<"\n\t"<<grade[1]<<"\n\t"<<grade[2]<<"\n\t"<<grade[3];
    std::cout<<"\n";
}