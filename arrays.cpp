#include <iostream>

int main(){
    int nums[5];
    int i = 0;
    while (i < 5){
        std::cout << "Enter a number: ";
        int number;
        std::cin >> number; 
        nums[i] = number;
        i++;
    }

    for(i = 0; i <= 4; i++){
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}
