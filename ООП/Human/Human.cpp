//
// Created by konstantin on 28.08.22.
//

#include "Human.h"
#include <iostream>
Human::Human(std::string_view name, int age, int height) {
    name_ = name;
    set_age(age);
    height_ = height;
    money_ = new double;
    *money_ = 0;
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
    std::cout << "hello, my name is " << name_ << " my age is " << age_  << "i have " << *money_ << "$ "<< std::endl;
}

void Human::set_age(int age) {
    if (age <= 0) {
        throw std::invalid_argument("invalid age");
    }
    age_ = age;
}

Human::Human() {
    age_ = 0;
    height_ = 0;
    money_ = new double ;
    *money_ = 0;
}

Human::~Human() {
    std::cout << "вызван деструктор\n";
    delete money_;
}

Human& Human::operator=(const Human &human) {
    std::cout << "вызван оператор=\n";
    delete money_;
    money_ = new double;
    *money_ = *human.money_;
    age_ = human.age_;
    height_ = human.height_;
    name_ = human.name_;
}

Human::Human(const Human &human) {
    std::cout << "вызван конструктор копирования\n";
    money_ = new double;
    *money_ = *human.money_;
    age_ = human.age_;
    height_ = human.height_;
    name_ = human.name_;
}

Human &Human::operator=(Human &&human) noexcept {
    std::cout << "вызвано перемещающее присваивание\n";
    delete money_;
    money_ = human.money_;
    human.money_ = nullptr;
    age_ = human.age_;
    height_ = human.height_;
    name_ = human.name_;
}

Human::Human(Human &&human) {
    std::cout << "вызван перемещающий конструктор\n";
    money_ = human.money_;
    human.money_ = nullptr;
    age_ = human.age_;
    height_ = human.height_;
    name_ = human.name_;
}
