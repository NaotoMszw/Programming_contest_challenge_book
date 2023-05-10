#pragma 
#include <algorithm>
#include <vector>

namespace subsequence{

    int solve(std::vector<int> y, int k){

        int ret = y.size() + 1;
        int start = 0;
        int end = 0;
        int sum = 0;

        for(;;){

            while(end < y.size() && sum < k){

                sum += y[end++];
            }
            if(sum < k){

                break;
            }
            ret = std::min(ret, end - start);
            sum -= y[start++];
        }

        if(ret > y.size()){

            ret = 0;
        }

        return ret;
    }
}