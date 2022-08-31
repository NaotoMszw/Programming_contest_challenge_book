#pragma once

bool dfs(std::vector<int> array, int k, int i, int sum){

    if(i == array.size()){

        return sum == k;
    }
    if(dfs(array, k, i + 1, sum)){

        return true;
    }
    if(dfs(array, k, i + 1, sum + array[i])){

        return true;
    }
    return false;
}