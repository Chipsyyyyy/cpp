#include <iostream>

class Buffer{
    private:
        int* data;
        int size;
        std::string label;

    public:
        // Constructor
        Buffer(int s, std::string l){
            size = s;
            label = l;
            data = new int[size];
            std::cout << label << " created." << std::endl;
        }

        // 1. Destructor
        ~Buffer(){
            delete[] data;
            std::cout << label << " destroyed." << std::endl;
        }

        // 2. Copy Constructor - handles: Buffer b = a;
        Buffer(const Buffer& other){
            size = other.size;
            label = other.label + " (copy)";
            data = new int[size];
            for (int i = 0; i < size; i++){
                data[i] = other.data[i];
            }
            std::cout << label << " deep-copied (constructor)." << std::endl;
        }

        // 3. Copy assignment operator - handles b = a;     (when b already exists)
        Buffer& operator=(const Buffer& other){
            if (this == &other){
                return *this;
            }

            delete[] data;
            size = other.size;
            label = other.label + " (assigned)";
            data = new int[size];
            for (int i = 0; i < size; i++){
                data[i] = other.data[i];
            }

            std::cout << label << " deep-copied (assignment)." << std::endl;
            return *this;
        }
};

int main() {
    std::cout << "--- Creating a ---" << std::endl;
    Buffer a(5, "a");

    std::cout << "--- Creating b as a copy of a ---" << std::endl;
    Buffer b = a;

    std::cout << "--- Creating c ---" << std::endl;
    Buffer c(3, "c");

    std::cout << "--- Assigning a into c ---" << std::endl;
    c = a;

    std::cout << "--- End of main ---" << std::endl;
    return 0;
}