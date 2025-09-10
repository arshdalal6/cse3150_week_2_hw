#include <iostream>

namespace GreetingUtils{
    std::string create_message(const std::string& name){
        return  "Hello " + name  + "!";
    };

    char* format_as_c_string(const std::string& msg){
        const std::size_t n = msg.size();

        char* characters = new char[n + 1];

        for(int i=0; i<n; i++){
            characters[i] = msg[i];
        }

        characters[n] = '\0';

        return characters;
    }
}