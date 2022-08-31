#pragma once
#include <array>
#include <string>
#include <cassert>

void cnt_water(std::array< std::array<std::string, 96>, 96>& lake, int sx, int sy){

    int y = lake.size();
    int x = lake[0].size();

    assert(0 <= sx && sx < x && 0 <= sy && sy < y);

    lake[sy][sx] = ".";

    for(int i = -1; i < 2; i++){
        for(int j = -1; j < 2; j++){
 
            int nx = sx + j;
            int ny = sy + i;

            if(0 <= nx && nx < x && 0 <= ny && ny < y && lake[ny][nx] == "w"){

                cnt_water(lake, nx, ny);
            }
        }
    }
    return;
}