#include <iostream>
#include <string>
#include <vector>

class Grades
{
private:
    int grades[4];

public:
    Grades();
    void setGrades(int grade, int index);
    int getRoundedGrades();
};

Grades::Grades() {
    for(int i = 0; i < 4 ; i++)
        grades[i] = 0;
}
void Grades::setGrades(int grade, int index) {
    grades[index] = grade;
}

int Grades::getRoundedGrades() {
    for(int i=0; i < 4; i++)
        if (grades[i] < 38)
            std::cout<<grades[i]<<"\t"<<"Failed"<<"\n";
        else if ((grades[i]%5) > 2)
            std::cout<<(grades[i]+(5-(grades[i]%5)))<<"\n";
        else
            std::cout<<(grades[i])<<"\n";
}

class Student: public Grades
{
private:
    std::string name;
public:
    void setName (std::string nameIn);
    void getName ();
};

void Student::setName(std::string nameIn) {
    name = nameIn;
}
void Student::getName() {
    std::cout<<name<<"\n";

}

