#include <iostream>
#include <vector>

void swap(int* first, int* second){
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}

int main(){
    std::vector<int> nums;
    int i = 0;
    while (i <2){
        std::cout << "Enter a number: ";
        int input;
        std::cin >> input;
        nums.push_back(input);
        i++;   
    }
    swap(&nums[0], &nums[1]);

    std::cout << nums[0] << " " << nums[1] << std::endl;
    
    return 0;
}

// void doubleIt(int& num){
//     num *= 2;
// }

// int main(){
//     std::cout << "Enter a number: ";
//     int num;
//     std::cin >> num;
//     doubleIt(num);

//     std::cout<< num << std::endl;
//     return 0;
// }