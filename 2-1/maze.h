#pragma once
#include <array>
#include <string>
#include <queue>

int search_maze(int sx,
                int sy,
                int ex,
                int ey,
                std::array< std::array<std::string, 12>, 12> maze,
                std::string start,
                std::string end,
                std::string passage,
                std::string wall){

    int size_x = maze.size();
    int size_y = maze[0].size();

    size_t inf = size_x * size_y * 10;

    std::array<int, 4> move_x = {1, 0, -1, -0};
    std::array<int, 4> move_y = {0, 1, 0, -1};
    std::queue< std::pair<int, int> > que;

    std::array<std::array<int, 12>, 12> distance;
    for(int i = 0; i < size_y; i++){
        for(int j = 0; j < size_x; j++){

            distance[i][j] = inf;
        }
    }

    std::pair<int, int> initial = {sx, sy};
    que.push(initial);

    distance[sy][sx] = 0;

    while(que.size()){

        std::pair<int, int> p = que.front();
        que.pop();

        if(p.first == ex && p.second == ey){

            break;
        }
        for(int i = 0; i < 4; i++){

            int nx = p.first + move_x[i];
            int ny = p.second + move_y[i];

            if(0 <= nx && nx < size_x && 0 <= ny && ny < size_y){

                if(maze[ny][nx] == passage && distance[ny][nx] == inf){

                    std::pair<int, int> next = {nx, ny};
                    que.push(next);
                    distance[ny][nx] = distance[p.second][p.first] + 1;
                }
            }
        }
    }

    return distance[ey][ex];
}