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

        std::string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        void setName(std::string newName){
            if (newName == " " || newName.empty()){
                std::cout << "Name cannot be empty" << std::endl;
                return;
            }
            name = newName;
        }

        void setAge(int newAge){
            if (newAge <= 0){
                std::cout << "Age cannot be 0 or negative" << std::endl;
                return;
            }
            age = newAge;
        }

        ~Person(){
            std::cout << getName() << " is being destroyed." << std::endl;
        }
};

int main(){
    {
        Person p("Maxwell", 21);
        std::cout << "Hi, I'm " << p.getName() << std::endl;
    }
    std::cout << "After the block." << std::endl;
    return 0;
}