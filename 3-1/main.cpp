#include <iostream>
#include <vector>
#include "lower_bound.h"
#include "cable_master.h"

int main(){

    std::vector<int> int_y = {2, 3, 3, 5, 6};
    int k = 3;

    int i_answer = solve_lower_bound(int_y, k);
    std::cout << i_answer << std::endl;

    std::vector<float> float_y = {8.02, 7.43, 4.57, 5.39};
    k = 11;
    float f_answer = solve_cable_master(float_y, k);
    std::cout << "Answer cable master: " << f_answer << std::endl;
}