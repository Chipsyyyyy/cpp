#include <memory>
#include <iostream>

class IntBox{
    private:
        std::unique_ptr<int> value;
    public:
        IntBox(int ptrValue){
            value = std::make_unique<int>(ptrValue);
        }

        int getValue(){
            std::cout << "Value is currently: " << *value << std::endl;
            return *value;
        }

        void setValue(int newVal){
            if(newVal >= 0){
                std::cout << "New value is: " << newVal << std::endl;
                *value = newVal;
            } else {
                std::cout << "Value cannot be 0 or negative." << std::endl;
            }
        }
};

int main(){
    IntBox a(10);
    a.getValue();
    a.setValue(20);
    IntBox b = std::move(a);
    b.getValue();
    return 0;
}