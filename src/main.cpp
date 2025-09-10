#include <iostream>
#include "greeting_utils.h"

int main(){
    std::string name;
    std::getline(std::cin, name);

    std::string greeting = GreetingUtils::create_message(name);
    char* msg = GreetingUtils::format_as_c_string(greeting);



    std::cout << msg << std::endl;

    delete[] msg;
    return 0;
}