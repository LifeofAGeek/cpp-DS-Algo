#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100]; //adjency list to store directed graph
int indeg[100];
vector<int> order;

void addEdge(int u, int v)
{
    adj[u].push_back(v); // u -> v
}

void toposort(int n)
{                    // n -> # of vertex
    queue<int> zero; //queue to store nodes of zero degree
    for (int i = 1; i <= n; i++)
    {
        if (indeg[i] == 0)
            zero.push(i);
    }

    while (!zero.empty())
    {
        int curr = zero.front();
        order.push_back(curr); //push the current node 
        zero.pop();

        for (int node : adj[curr])
        {
            indeg[node]--; //if any node now have zero in-degree 
            if (indeg[node] == 0) //after removing the current node
                zero.push(node);
        }
    }
}

int main()
{
    int v, e, x, y;
    cin >> v >> e;
    for (int i = 1; i <= e; i++)
    {
        cin >> x >> y;
        addEdge(x, y);
        indeg[y]++;
    }
    toposort(v); //assuming it Acyclic Graph (No cycles in it)
    for(auto a:order) cout<<a<<" ";
}