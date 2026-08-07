#include <string>
#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string personName, int personAge){
        name = personName;
        age = personAge;
    }

    void introduce(){
        std::cout << "Hi I'm " << name << " and I'm " << age << " years old." << std::endl;
    }
};

int main(){
    Person alice("Alice", 22);
    alice.introduce();
    
    return 0;
}