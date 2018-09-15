//
// Created by BABO on 9/15/18.
//

#include "Student.h"

void Student::setName() {
    std::cout<<"What is your Full Name?\t";
    std::cin>>fullName;
    std::cout<<"\n";
}

void Student::setId() {
    std::cout<<"Your Student Id?\t";
    std::cin>>studentId;
    std::cout<<"\n";
}

void Student::getInfo() {

    std::cout<<"The semester grades for:  "<< fullName<< "\nStudent ID:\t" << studentId<<"\n";
    Grades::display();
}

void Student::overallAverage() {
    std::cout<< "Overall Average for "<<fullName<<":  " << Grades::average();
}