#include <iostream>
#include <vector>
#include "lower_bound.h"

int main(){

    std::vector<int> y = {2, 3, 3, 5, 6};
    int k = 3;

    int answer = solve_lower_bound(y, k);
    std::cout << answer << std::endl;
}