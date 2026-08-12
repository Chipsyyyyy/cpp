#include <vector>
#include <algorithm>
#include <iostream>

int main(){
    std::vector<int> list = {4, 1, 99, 23, 63, 8};
    std::sort(list.begin(), list.end());

    std::for_each(list.begin(), list.end(), [](int x){
        std::cout << x << " "; 
    });
    std::cout << std::endl;

    auto it = std::find(list.begin(), list.end(), 23);
    if (it != list.end()){
        std::cout << "Found!" << std::endl;
    } else {
        std::cout << "Not Found" << std::endl;
    }

    return 0;
}

