#pragma once
#include <vector>

bool dfs(std::vector<std::vector<int>> g, int v, int c, std::vector<int>& color){

    color[v] = c;
    for(int i = 0; i < g[v].size(); i++){

        if(color[g[v][i]] == c){

            return false;
        }
        if(color[g[v][i]] == 0 && !dfs(g, g[v][i], -c, color)){

            return false;
        }
    }
    return true;
}

bool judge(std::vector<std::vector<int>> g){

    std::vector<int> color;
    color.resize(g.size());

    for(int i = 0; i < color.size(); i++){

        color[i] = 0;
    }

    for(int i = 0; i < g.size(); i++){

        if(color[i] == 0){

            if(!dfs(g, i, 1, color)){

                return false;
            }
        }
    }

    return true;
}