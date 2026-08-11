#include <iostream>

int add(int x, int y){
    return x + y;
}

int main(){
    std::cout << "First Num: ";
    int x;
    std::cin>> x;
    std::cout << "Second Num: ";
    int y;
    std::cin>> y;
    int sum = add(x, y);
    std::cout << sum << std::endl;
    return 0;
}
