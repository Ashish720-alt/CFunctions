#include<bits/stdc++.h>
#include "graphRepr.h"
#include "constants.h"

using namespace std;
 
void DiGraph::BFS(long src , bool print , bool compute_BFS_tree)
{
    // Mark all the vertices as not visited
    vector<bool> visited;
    visited.resize(V,false);
    long s = src;
    vector<long> d (V, INF);
    vector<long> pi (V, -1);

    // Create a queue for BFS
    list<long> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    if (compute_BFS_tree)
        d[s] = 0;
        pi[s] = -1;
    queue.push_back(s);
 
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        if (print)
            cout << s << " ";        
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto adjacent: adj[s])
        {
            if (!visited[adjacent])
            {
                visited[adjacent] = true;

                if (compute_BFS_tree)
                    d[adjacent] = d[s] + 1;
                    pi[adjacent] = pi[s];

                queue.push_back(adjacent);
            }
        }
    }

    if (compute_BFS_tree)
        BFS_d.insert(pair<long, vector<long>> (src, d) );
        BFS_pi.insert(pair<long, vector<long>>  (src, pi) );
}

void DiGraph::computeBFSTree (long src) {
    if (BFS_d.find(src) == BFS_d.end() )
        BFS(src, false, true);
}