#ifndef LESSON_18_STUDENT_H
#define LESSON_18_STUDENT_H

#include "Person.h"

class Student : public Person{
public:
    Student(std::string  name, int age, bool is_male, double score);

    void show_info() override;
private:
    double score_;
};


#endif //LESSON_18_STUDENT_H
