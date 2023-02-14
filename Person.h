#ifndef LESSON_18_PERSON_H
#define LESSON_18_PERSON_H

#include <iostream>
#include <string>
#include <utility>

class Person {
public:
    Person() = default;
    Person(std::string  name, int age, bool is_male);

    virtual void show_info();

    virtual ~Person() = default;

protected:
    std::string name_;
    int age_;
    bool is_male_;
};


#endif //LESSON_18_PERSON_H
