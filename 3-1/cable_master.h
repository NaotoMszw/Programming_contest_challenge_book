#pragma once
#include <vector>
#include <float.h>

bool judge(std::vector<float> y, int k, float l){

    int num = 0;
    for(int i = 0; i < y.size(); i++){

        num += (int)(y[i] / l);
    }

    return num >= k;
}

int solve_cable_master(std::vector<float> y, int k){

    constexpr double e = 0.001;

    float lb = 0.0;
    float ub = FLT_MAX;

    while(ub - lb > e){

        float mid = (lb + ub) / 2.0;
        if(judge(y, k, mid)){

            lb = mid;
        }
        else{

            ub = mid;
        }
    }

    return floor(ub * 100) / 100;
}