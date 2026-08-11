#include <string>
#include <iostream>

int main(){
    std::string fullName;
    std::cout << "Enter your fullname: ";
    std::getline(std::cin, fullName);
    std::cout << "Hello, " + fullName + "!"<<std::endl;
    return 0;
}