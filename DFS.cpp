#include<bits/stdc++.h>
#include "graphRepr.h"
#include "constants.h"

using namespace std;


void DiGraph::DFSVisit(long v, bool visited[], long& time, bool print, bool computeDFStimes)
{
    if (computeDFStimes)
        time = time + 1;
        DFS_d[v] = time;
    
    visited[v] = true;
    
    if (print)
        cout << v << " ";

    for (list<long>::iterator it = adj[v].begin(); it != adj[v].end(); it++)
        {
            if (!visited[*it])
                if (computeDFStimes)
                    DFS_pi[*it] = v;
                DFSVisit(*it, visited, time, print, computeDFStimes);
        }
    if (computeDFStimes)
        time = time + 1;
        DFS_f[v] = time;
}


void DiGraph::DFS(bool print, bool computeDFStimes)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    
    if (computeDFStimes)
        DFS_d.resize(V, INF);
        DFS_f.resize(V, INF);
        DFS_pi.resize(V, -1);
    long time = 0;

    for(long v = 0 ; v < V; v++)
        if (visited[v] == false)
            DFSVisit(v, visited, time, print, computeDFStimes);
}

void DiGraph::computeDFSTimes () 
{
    DFS(false, true);
}


