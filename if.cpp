#include <iostream>

int main(){
    std::cout<< "Enter a number: ";
    int x;
    std::cin >> x;

    if (x > 0){
        std::cout<< "Positive"<<std::endl;
    }
    else if (x == 0) {
        std::cout<< "Zero"<<std::endl;
    }
    else{
        std::cout<< "Negative"<<std::endl;
    }
    return 0;
}

