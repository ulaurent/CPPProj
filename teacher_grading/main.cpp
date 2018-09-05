#include "grading.hpp"

int main ()
{

    Student student1;

    student1.setName("Lavhana");
    student1.getName();
    student1.setGrades(75,0);
    student1.setGrades(34,1);
    student1.setGrades(67,2);
    student1.setGrades(24,3);
    student1.getRoundedGrades();

}