#include <vector>

int solve_lower_bound(std::vector<int> a, int k){

    int lb = 0;
    int ub = a.size() - 1;

    while(ub - lb > 1){

        int mid = (lb + ub) / 2;
        if(a[mid] >= k){

            ub = mid;
        }
        else{

            lb = mid;
        }
    }

    return ub;
}