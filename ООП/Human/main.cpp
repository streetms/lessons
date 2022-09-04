#include <iostream>
#include "Human.h"

int main() {
    Human human("Иван",-1,190);
    human.say_hello();
    std::cout << "enter you age : ";
    while (true) {
        try {
            int age;
            std::cin >> age;
            human.set_age(age);
            break;
        }
        catch (std::invalid_argument& ex) {
            std::cout << "error. " << ex.what() << " : ";
        }
    }
    return 0;
}
