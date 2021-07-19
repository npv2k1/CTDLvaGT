/**
 * @file DSA09017.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-06-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;

    bool vs(int v, bool visited[], int parent);

public:
    Graph(int V);

    void addEdge(int v, int w);

    bool isTree();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

bool Graph::vs(int v, bool visited[], int parent)
{

    visited[v] = true;

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if (!visited[*i])
        {
            if (vs(*i, visited, v))
                return true;
        }
        else if (*i != parent)
            return true;
    }
    return false;
}

///
bool Graph::isTree()
{

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    if (vs(0, visited, -1))
        return false;

    for (int u = 0; u < V; u++)
        if (!visited[u])
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Graph g(n);
        for (int i = 0; i < n - 1; ++i)
        {
            int x, y;
            cin >> x >> y;
            g.addEdge(x - 1, y - 1);
        }
        g.isTree() ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}
/**
 * @brief 1131169	
2021-06-01

18:19:41

KIỂM TRA ĐỒ THỊ CÓ PHẢI LÀ CÂY HAY KHÔNG	AC	0.01s	3264Kb	C/C++
 * 
 */
