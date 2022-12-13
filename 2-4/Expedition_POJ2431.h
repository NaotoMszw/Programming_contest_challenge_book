#pragma once
#include <vector>
#include <queue>

int solve_num_supply(int num_gas_station,
                     std::vector<int> distance,
                     std::vector<int> supply,
                     int distance_to_goal,
                     int initial_fuel){

    distance.push_back(distance_to_goal);
    supply.push_back(0);

    std::priority_queue<int> que;

    int ret(0), now(0), tank(initial_fuel);

    for(int i = 0; i < distance.size() - 1; i++){

        int d = distance[i] - now;

        while(tank - d < 0){

            if(que.empty()){

                std::cout << "impossibe" << std::endl;
                return -1;
            }
            tank += que.top();
            que.pop();
            ret += 1;
        }

        tank -= d;
        now = distance[i];
        que.push(supply[i]);
    }

    return ret;
}