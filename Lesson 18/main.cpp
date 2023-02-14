#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>

#include "Person.h"
#include "Student.h"
#include "Employee.h"

std::vector<std::unique_ptr<Person>> enter_person_info(){
    std::vector<std::unique_ptr<Person>> vec(6);

    std::string name;
    int age = 0;
    bool is_male = false;

    for (size_t i = 0; i < 6; ++i) {
        std::string class_type;
        std::cin >> class_type;

        if(class_type == "Person"){

            std::cin >> name >> age >> is_male;

            std::unique_ptr<Person> p(std::make_unique<Person>(name, age, is_male));
            (new Person(name, age, is_male));
            vec[i] = std::move(p);
        }
        else if(class_type == "Student"){
            double score = 0;

            std::cin >> name >> age >> is_male >> score;

            std::unique_ptr<Student> s(std::make_unique<Student>(name, age, is_male, score));
            vec[i] = std::move(s);
        }
        else if(class_type == "Employee"){

            double day_salary = 0;

            std::cin >> name >> age >> is_male >> day_salary;

            std::unique_ptr<Employee> e(std::make_unique<Employee>(name, age, is_male, day_salary));
            vec[i] = std::move(e);
        }
        else {
            throw std::invalid_argument("Invalid argument.");
        }
    }

    return vec;
}

void print_person_info(const std::vector<std::unique_ptr<Person>>& vec){

    for (auto & i : vec) {
            i->show_info();
        }
}

void calculate_employee_overtime(const std::vector<std::unique_ptr<Person>>& vec){
    for (auto & i : vec) {

        auto* employee = dynamic_cast<Employee*>(i.get());
        if(employee != nullptr){
            employee->calculate_over_time(2);
        }
    }
}

int main() {

    std::vector<std::unique_ptr<Person>> vec = enter_person_info();

    calculate_employee_overtime(vec);
    print_person_info(vec);

    return 0;
}

