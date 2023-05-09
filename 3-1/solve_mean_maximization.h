#pragma once
#include <algorithm>
#include <float.h>
#include <vector>

namespace mean_maximization{

    bool judge(std::vector<std::pair<int, int>> pairs, int k, double average){

        std::vector<double> y;
        y.resize(pairs.size());

        for(int i = 0; i < pairs.size(); i++){

            y[i] = pairs[i].second - average * pairs[i].first;
        }
        std::sort(y.begin(), y.end());

        double sum = 0.0;
        for(int i = 0; i < k; i++){

            sum += y[pairs.size() - 1 - i];
        }

        return sum >= 0;
    }

    double solve(std::vector<std::pair<int, int>> pairs, int k){

        constexpr double e = 0.0001;
        double lb = 0.0;
        double ub = DBL_MAX;

        while(ub- lb > e){

            double mid = (ub + lb) / 2.0;
            if(judge(pairs, k, mid)){

                lb = mid;
            }
            else{

                ub = mid;
            }
        }
        return lb;
    }
}