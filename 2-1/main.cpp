#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
#include <vector>

#include "partial_sum.h"
#include "lake_counting.h"

std::vector<int> array_0 = {1,2,4,7};
int k_0 = 11;

int exe(int index){

    if(index == 0){

        bool flag = false;
        if( dfs(array_0, k_0, 0, 0) ){

            flag = true;
        };
        if(flag){
            
            std::cout << "yes" << std::endl;
        }
        else{

            std::cout << "no" << std::endl;
        }
    }

    else if(index == 1){

        std::srand(time(NULL));
        std::array< std::array<std::string, 96>, 96> lake;
        int size_y = lake.size();
        int size_x = lake[0].size();
        std::cout << size_y << " " << size_x << std::endl;
        for(int i = 0; i < size_y; i++){

            for(int j = 0; j < size_x; j++){

                int y = rand();
                if(y % 13 == 0){

                    lake[i][j] = "w";
                }
                else{

                    lake[i][j] = ".";
                }
            }
        }

        int res = 0;

        for(int y = 0; y < size_y; y++){
            for(int x = 0; x < size_x; x++){
                
                if(lake[y][x] == "w"){

                    cnt_water(lake, x, y);
                    res += 1;
                }
            }
        }
        std::cout << "water cnt: " << res << std::endl;
    }

    return 0;
}

int main(){

    exe(0);
    exe(1);
}