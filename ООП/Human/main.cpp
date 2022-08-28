#include <iostream>
#include "Human.h"

int main() {
    Human human("Иван", 19, 183);
    human.say_hello();
    human.set_age(-124);
    human.say_hello();
    return 0;
}
