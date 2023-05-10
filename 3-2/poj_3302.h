#pragma 
#include <algorithm>
#include <map>
#include <set>
#include <vector>

namespace poj_3302{

    int solve(std::vector<int> y){

        std::set<int> elements;
        for(int i = 0; i < y.size(); i++){

            elements.insert(y[i]);
        }
        int num_elem = elements.size();

        int start = 0;
        int end = 0;
        int num = 0;

        std::map<int, int> cnt;
        int ret = y.size();

        for(;;){

            while(end < y.size() && num < num_elem){

                if(cnt[y[end++]]++ == 0){

                    num += 1;
                }
            }

            if(num < num_elem){

                break;
            }

            ret = std::min(ret, end - start);
            if(--cnt[y[start++]] == 0){

                num -= 1;
            }
        }

        return ret;
    }
}