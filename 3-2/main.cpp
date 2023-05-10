#include <iostream>
#include "subsequence.h"

int main(){

    int sum = 15;
    std::vector<int> int_y = {5, 1, 3, 5, 10, 7, 4, 9, 2, 8};

    int int_answer = subsequence::solve(int_y, sum);
    std::cout << "Answer subsequence: " << int_answer << std::endl;
}