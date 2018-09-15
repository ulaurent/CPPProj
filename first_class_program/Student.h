//
// Created by BABO on 9/15/18.
//
#include "Grades.h"

#ifndef A_FIRST_CLAS_PROGRAM_STUDENT_H
#define A_FIRST_CLAS_PROGRAM_STUDENT_H


class Student: public Grades {
private:
    std::string fullName;
    std::string studentId;
public:
    void setName();
    void setId();
    void getInfo();
    void overallAverage();
};


#endif //A_FIRST_CLAS_PROGRAM_STUDENT_H
