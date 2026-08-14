#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Validate a store name to see if it is empty or single whitespace
std::string validateStoreName(std::string validateName){
            while (validateName.empty() || validateName == " "){
                std::cout << "Name cannot be empty." << std::endl;
                std::cout << "Enter a store name: ";
                std::getline(std::cin, validateName);
            }
            return validateName;
    }

// Match the name of the store to a store a user posses
std::string matchStore(Person user, std::string storeName){
    // Loop through list of stores & match the store names
    std::for_each()
    // Once store name is matched call .setName() for that store.
}

class Person{
    private:
        std::string name;
        int storeAmount;
    public:
        Person(std::string personName, int newStoreAmount){
            name = personName;
            storeAmount = newStoreAmount;
        }

        std::string getName(){
            return name;
        }

        int getStoreAmount(){
            return storeAmount;
        }

        void setName(std::string newName){
            name = newName;
        }

        void setStoreAmount(){
            storeAmount += 1;
        }


}

class Store {
    private:
        std::string name;
        //std::vector<std::string> items;
    public:
        Store(std::string storeName/*, std::vector<std::string> storeItems*/){
            name = storeName;
            //items = storeItems;
        }

        std::string getName(){
            return name;
        }  

        void setName(){
            std::string newName;
            std::cout << "Enter a store name: ";
            std::getline(std::cin, newName);
            name = validateStoreName(newName);
        }

};

void menu(Person user){
    // Prompt user for action
    std::cout << "What would you like to do? " << std::endl;
    std::cout << "1: Create a new store?" << std::endl;
    std::cout << "2: Rename your store? (Must have a store first!)" << std::endl;
    std::cout << "Choice: ";
    int choice;
    std::cin >> choice;
    // Create new store
    if(choice == 1){
        std::string storeName;
        std::cout << "Enter store name: ";
        std::getline(std::cin, storeName);
        std::string newStoreName = validateStoreName(storeName);
        Store s(newStoreName);
        user.setStoreAmount();
        std::cout << s.getName() << std::endl;
    }
    if (choice == 2){
        if (newUser.getStoreAmount() == 0){
            std::cout << "Must have a store first!" << std::endl;
            return
        } else {
            std::string currentStoreName;
            std::cout << "Enter the current name of the store you want to change: ";
            std::getline(std::cin, currentStoreName);
            matchStore(user, currentStoreName);
        }
    }   
}


int main(){
    Person user("Maxwell", 0);
    menu(user);
    return 0;
}