#include <memory>
#include <iostream>

class Resource{
    public:
        Resource(){
            std::cout << "Resource acquired." << std::endl;
        }

        ~Resource(){
            std::cout << "Resource released." << std::endl;
        }
};

int main(){
    std::shared_ptr<Resource> a = std::make_shared<Resource>();
    std::cout << a.use_count() << std::endl; // Prints 1
    std::shared_ptr<Resource> b = a;
    std::cout << a.use_count() << std::endl; // Prints 2
    {
        std::shared_ptr<Resource> c = b;
        std::cout<< a.use_count() << std::endl; // Prints 3
    }
    std::cout << a.use_count() << std::endl; // Prints 2
    return 0;
}