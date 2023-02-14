#include "Employee.h"

#include <utility>

Employee::Employee(std::string  name, int age, bool is_male, double day_salary)
    : Person(std::move(name), age, is_male), day_salary_(day_salary), overtime_salary_(0) {}

double Employee::calculate_over_time(const double hours){

    if(age_ >= 18){
        overtime_salary_ = (day_salary_ * hours) * 1.5;
    }

    return overtime_salary_;
}

void Employee::show_info(){

    std::cout << "Employee " << name_ << " is on " << age_ << " age and is male: "
              << std::boolalpha << is_male_ << " and has extra overtime for " << overtime_salary_ << " dollars." << std::endl;
}
