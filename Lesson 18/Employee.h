#ifndef LESSON_18_EMPLOYEE_H
#define LESSON_18_EMPLOYEE_H

#include "Person.h"

class Employee : public Person{
public:
    Employee() = default;
    Employee(std::string  name, int age, bool is_male, double day_salary);

    double calculate_over_time(double hours);
    void show_info() override;
private:
    double day_salary_;
    double overtime_salary_;
};


#endif //LESSON_18_EMPLOYEE_H
