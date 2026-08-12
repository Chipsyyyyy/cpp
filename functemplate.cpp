#include <iostream>
#include <string>

template <typename T>
T myMax(T first, T second){
    if (first > second){
        std::cout << first << " is the greater element" << std::endl;
        return first;
    }
    std::cout << second << " is the greater element" << std::endl;
    return second;
}

int main(){
    int a = 5, b = 10;
    myMax(a, b);
    double x = 3.7, y = 2.1;
    myMax(x, y);
    std::string s1 = "apple", s2 = "banana";
    myMax(s1, s2);
    return 0;
}