#pragma once
#include <algorithm>
#include <climits>
#include <vector>

namespace aggressive_cows{

    bool judge(std::vector<int> y, int m, int d){

        int last = 0;
        for(int i = 1; i < m; i++){

            int next = last + 1;
            while(next < y.size() && y[next] - y[last] < d){

                next += 1;
            }
            if(next == y.size()){

                return false;
            }
            last = next;
        }
        return true;
    }

    int solve(std::vector<int> y, int m){

        std::sort(y.begin(), y.end());
        int lb = 0;
        int ub = INT_MAX;

        int mid;
        while(ub - lb > 1){

            mid = (ub + lb) / 2;
            if(judge(y, m, mid)){

                lb = mid;
            }
            else{

                ub = mid;
            }
        }

        return lb;
    }

}