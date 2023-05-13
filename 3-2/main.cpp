#include <iostream>
#include "subsequence.h"
#include "poj_3320.h"

#include "poj_3276.h"
#include "poj_3279.h"

int main(){

    int sum = 15;
    std::vector<int> int_y = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};

    int int_answer = subsequence::solve(int_y, sum);
    std::cout << "Answer subsequence: " << int_answer << std::endl;

    int_y = {1, 8, 8, 8, 1};
    int_answer = poj_3320::solve(int_y);
    std::cout << "Answer poj3320: " << int_answer << std::endl;

    std::string string_y = "BBFBFBB";
    int m = -1;
    int k = -1;
    poj_3276::solve(string_y, m, k);
    std::cout << "Answer poj3276: " << m << " " << k << std::endl;

    std::vector<std::vector<int>> map_y;
    map_y.resize(4);

    map_y[0] = {1, 0, 0, 1};
    map_y[1] = {0, 1, 1, 0};
    map_y[2] = {0, 1, 1, 0};
    map_y[3] = {1, 0, 0, 1};

    poj_3279::solve(map_y);
}