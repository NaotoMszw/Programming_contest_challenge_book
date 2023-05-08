#pragma once
#include <vector>

struct edge{int from, to, cost;};

std::vector<int> shortest_path(std::vector<edge> edges, int num_v, int start){

    const int inf = 1e9;
    std::vector<int> ret(num_v, inf);

    ret[start] = 0;
    while(true){

        bool update = false;
        for(int i = 0; i < edges.size(); i++){

            edge e = edges[i];
            if(ret[e.from] != inf && ret[e.to] > ret[e.from] + e.cost){

                ret[e.to] = ret[e.from] + e.cost;
                update = true;
            }
        }
        if(!update){

            break;
        }
    }

    for(int i = 0; i < ret.size(); i++){

        std::cout << "Distance: " << ret[i] << std::endl;
    }

    return ret;
}