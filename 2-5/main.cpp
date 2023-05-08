#include <iostream>
#include <vector>
#include "2-part_graph_judge.h"
#include "bellman-ford.h"

void two_part_graph_judge(){

    std::vector<std::vector<int>> g;
    g.resize(3);

    g[0].push_back(1);
    g[1].push_back(0);

    g[0].push_back(2);
    g[2].push_back(0);

    g[1].push_back(2);
    g[2].push_back(1);

    bool result = judge(g);
    std::cout << result << std::endl;
}

void bellman_ford(){

    std::cout << "bellman-ford" << std::endl;
    std::vector<edge> edges;

    edge e0;
    e0.from = 0;
    e0.to = 1;
    e0.cost = 4;
    edges.push_back(e0);

    edge e1;
    e1.from = 1;
    e1.to = 2;
    e1.cost = 1;
    edges.push_back(e1);

    edge e2;
    e2.from = 0;
    e2.to = 3;
    e2.cost = 5;
    edges.push_back(e2);

    edge e3;
    e3.from = 3;
    e3.to = 1;
    e3.cost = -2;
    edges.push_back(e3);

    edge e4;
    e4.from = 1;
    e4.to = 4;
    e4.cost = 2;
    edges.push_back(e4);

    edge e5;
    e5.from = 1;
    e5.to = 5;
    e5.cost = 4;
    edges.push_back(e5);

    edge e6;
    e6.from = 2;
    e6.to = 5;
    e6.cost = 4;
    edges.push_back(e6);

    edge e7;
    e7.from = 3;
    e7.to = 4;
    e7.cost = 1;
    edges.push_back(e7);

    edge e8;
    e8.from = 4;
    e8.to = 5;
    e8.cost = 3;
    edges.push_back(e8);

    std::vector<int> distance = shortest_path(edges, 6, 0);
}

int main(){

    two_part_graph_judge();
    bellman_ford();
}