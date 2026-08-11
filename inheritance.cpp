#include <string>
#include <iostream>

class Person {
    private:
        std::string name;
        int age;
        std::string attribute;
    public:
        Person(std::string personName, int personAge, std::string personAttribute){
            name = personName;
            age = personAge;
            attribute = personAttribute;
        }

        void introduce(){
            std::cout << "Hi, I'm " << name << " and I am " << age << " years old and I am " << attribute << std::endl;
        }

        int getAge(){
            return age;
        }

        std::string getName(){
            return name;
        }

        std::string getAttribute(){
            return attribute;
        }

        void setAge(int newAge){
            if (newAge <= 0){
                std::cout << "Age cannot be zero or negative!" << std::endl;
            } else {
                age = newAge;
            }
        }

        void setName(std::string newName){
            if(newName == "" || newName == " "){
                std::cout << "Name cannot be empty" << std::endl;
            } else {
                name = newName;
            }
        }

        void setAttribute(std::string newAttribute){
            if(newAttribute == "" || newAttribute == " "){
                std::cout << "Attribute cannot be empty" << std::endl;
            } else {
                attribute = newAttribute;
            }
        }
};

class Student : public Person {
    private:
        std::string university;
    public:
        Student(std::string personName, int personAge, std::string personAttribute, std::string uni)
                : Person(personName, personAge, personAttribute){
                    university = uni;
        }
        
        std::string getUni(){
            return university;
        }

        void study(){
            std::cout << getName() << " is studying at " << university << std::endl;
        }

        void setUni(std::string newUni){
            if (newUni.isEmpty() || newUni == " "){
                std::cout << "University cannot be empty" << std::endl;
                return;
            }
            university = newUni;
        }
};

int main(){
    Student myStu("Maxwell", 24, "Cool", "UTS");
    myStu.introduce();
    myStu.setName("");
    myStu.setName("Alice");
    myStu.setAge(-6);
    myStu.setAge(21);
    myStu.setAttribute("");
    myStu.setAttribute("Cute");
    myStu.setUni("");
    myStu.setUni("USYD");
    myStu.introduce();
    myStu.study();
}