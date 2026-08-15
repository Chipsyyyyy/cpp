#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

int main(){
    std::vector<int> nums = {1, 5, 19, 2};
    //int sum = 0;
    // std::for_each(nums.begin(), nums.end(), [&sum](int x){
    //     sum += x;
    // });

    int sum = std::accumulate(nums.begin(), nums.end(), 0);

    int count = std::count_if(nums.begin(), nums.end(), [](int x){
        return x > 5;
    });

    std::cout << count << std::endl;
    std::cout << sum << std::endl;
    return 0;
}
