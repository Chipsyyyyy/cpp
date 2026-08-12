#include <iostream>
#include <string>

template <typename T>
class Box{
    private:
        T value;
    public:
        Box(T val){
            value = val;
        }

        T getValue(){
            return value;
        }

        void setValue(T newValue){
            value = newValue;
        }
};

int main(){
    Box<int> a(10);
    std::cout << a.getValue() << std::endl;
    a.setValue(20);
    std::cout << a.getValue() << std::endl;
    Box<std::string> s("hello");
    std::cout << s.getValue() << std::endl;
    s.setValue("horray");
    std::cout << s.getValue() << std::endl;
    return 0;
}