#include <string>
#include <iostream>

class Person{
    private:
        std::string name;
        int age;
    public:
        Person(std::string personName, int personAge){
            name = personName;
            age = personAge;
        }

        void introduce(){
            std::cout << "Hi, I'm " << name << " and I'm " << age << " years old." << std::endl;
        }

        int getAge(){
            return age;
        }

        std::string getName(){
            return name;
        }

        void setAge(int newAge){
            if(newAge >= 0){
                age = newAge;
            }
            else {
                std::cout << "Age cannot be negative." << std::endl;
            }
        }

        void setName(std::string newName){
            if(newName == ""){
                std::cout << "Name cannot be empty." << std::endl;
            } else {
                name = newName;
            }
        }
};

int main(){
    Person person("Maxwell", 26);
    person.setName("");
    person.setName("Alice");
    person.setAge(-5);
    person.setAge(21);
    std::cout << person.getAge() << std::endl;
    std::cout << person.getName() << std::endl;
    person.introduce();
    return 0;
}