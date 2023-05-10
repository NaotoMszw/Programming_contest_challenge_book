#include <iostream>
#include "subsequence.h"
#include "poj_3302.h"

int main(){

    int sum = 15;
    std::vector<int> int_y = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};

    int int_answer = subsequence::solve(int_y, sum);
    std::cout << "Answer subsequence: " << int_answer << std::endl;

    int_y = {1, 8, 8, 8, 1};
    int_answer = poj_3302::solve(int_y);
    std::cout << "Answer poj3302: " << int_answer << std::endl;

}