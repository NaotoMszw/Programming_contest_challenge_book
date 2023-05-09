#include <iostream>
#include <vector>
#include "lower_bound.h"
#include "cable_master.h"
#include "solve_aggressive_cows.h"
#include "solve_mean_maximization.h"

int main(){

    std::vector<int> int_y = {2, 3, 3, 5, 6};
    int k = 3;
    int i_answer = lower_bound::solve(int_y, k);
    std::cout << "Answer: lower bound: " << i_answer << std::endl;

    std::vector<float> float_y = {8.02, 7.43, 4.57, 5.39};
    k = 11;
    float f_answer = cable_master::solve(float_y, k);
    std::cout << "Answer: cable master: " << f_answer << std::endl;

    int_y = {1, 2, 8, 4, 9};
    int m = 3;
    i_answer = aggressive_cows::solve(int_y, m);
    std::cout << "Answer: aggressive cows: " << i_answer << std::endl;

    k = 2;
    std::vector<std::pair<int, int>> pairs = {{2, 2}, {5, 3}, {2, 1}};
    f_answer = mean_maximization::solve(pairs, k);
    std::cout << "Answer: mean_maximization: " << f_answer << std::endl;
}