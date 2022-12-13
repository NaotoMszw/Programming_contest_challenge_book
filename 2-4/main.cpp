#include <iostream>
#include <vector>
#include "Expedition_POJ2431.h"

void exe(int index){

    if(index == 0){

        int num_gas_station = 4;
        std::vector<int> distance = {10, 14, 20, 21};
        std::vector<int> supply = {10, 5, 2, 4};
        int distance_to_goal = 25;
        int initial_fuel = 10;

        int num_supply = solve_num_supply(num_gas_station, distance, supply, distance_to_goal, initial_fuel);
        std::cout << "num supply: " << num_supply << std::endl;
    }
}

int main(){

    exe(0);
}