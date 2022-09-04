#include <iostream>
#include "Human.h"

int main() {
    Human human("Иван",10,190);
    human.say_hello();

    Human human1;

    human1 = human;
    Human human2 (human1);

    Human human3 (std::move(human));
    human2 = std::move(human3);
    return 0;
}
