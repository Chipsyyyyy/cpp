#include <vector>
#include <iostream>

int main(){
    std::vector<int> nums;
    int i = 0;

    while (i < 5){
        std::cout << "Enter a number: ";
        int x;
        std::cin >> x;
        nums.push_back(x);
        i++;
    }

    for(i =0; i < nums.size(); i++){
        std::cout << nums[i] <<std::endl;
    }

    return 0;
}