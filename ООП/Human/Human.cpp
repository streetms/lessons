//
// Created by konstantin on 28.08.22.
//

#include "Human.h"
#include <iostream>
Human::Human(std::string_view name, int age, int height) {
    name_ = name;
    set_age(age);
    height_ = height;
}

std::string Human::get_name() {
    return name_;
}

uint Human::get_age() {
    return age_;
}

uint Human::get_height() {
    return height_;
}

void Human::say_hello() {
    std::cout << "hello, my name is " << name_ << " my age is " << age_ << std::endl;
}

void Human::set_age(int age) {
    if (age <= 0) {
        throw std::invalid_argument("age <= 0");
    }
    age_ = age;
}

Human::Human() {
    age_ = 0;
    height_ = 0;
}
