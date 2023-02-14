#include "Person.h"

Person::Person(std::string  name, int age, bool is_male)
:   name_(std::move(name)), age_(age), is_male_(is_male) {}

void Person::show_info(){

    std::cout << "Person " << name_ << " is on " << age_ << " age and is male "
    << std::boolalpha << is_male_ << std::endl;
}
