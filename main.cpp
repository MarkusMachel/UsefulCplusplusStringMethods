#include <iostream>
#include <string>

int main() {
    //useful string methods

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); //getline() is a method of the string class that allows us to read a line of text from the user even if it contains spaces

    if (name.length() > 12) {
        std::cout << "Your name is too long! Cant be over 12 characters" << std::endl;
    }
    else if (name.empty()) {
        std::cout << "You didn't enter a name!" << std::endl;
    }
    else {
        std::cout << "Hello " << name << std::endl;
    }

    name.append(" the Great"); //append() is a method of the string class that allows us to add text to the end of a string

    std::cout << "Hello " << name << std::endl;

    //find() is a method of the string class that allows us to find the index of a character or string within a string
    std::cout << "Index of space: "<< name.find(" ") << std::endl;

    return 0;
}