

#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int V;

    list<int> *adj;

public:
    Graph(int V);

    void addEdge(int v, int w);

    void Check(int s, int y);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::Check(int s, int y)
{

    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    list<int> queue;

    visited[s] = true;
    queue.push_back(s);

    list<int>::iterator i;

    while (!queue.empty())
    {

        s = queue.front();
        //        cout << s+1 << " ";
        if (s + 1 == y)
        {
            cout << "YES" << endl;
            return;
        }
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, c, u;
        cin >> n >> c;
        Graph g(n);
        for (int i = 0; i < c; ++i)
        {
            int x, y;
            cin >> x >> y;
            g.addEdge(x - 1, y - 1);
            g.addEdge(y - 1, x - 1);
        }
        cin >> u;
        while (u--)
        {
            int x, y;
            cin >> x >> y;
            g.Check(x - 1, y);
        }
    }

    return 0;
}