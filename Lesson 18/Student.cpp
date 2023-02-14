#include "Student.h"

#include <utility>

Student::Student(std::string  name, int age, bool is_male, double score)
    : Person(std::move(name), age, is_male), score_(score) {
    if(score < 2.0 || score > 6.0){
        score_ = 0;
        std::cerr << "Score should be between 2 and 6." << std::endl;
    }
}

void Student::show_info() {

    std::cout << "Student " << name_ << " is on " << age_ << " age and is male: "
              << std::boolalpha << is_male_ << " has score " << score_ << std::endl;
}
