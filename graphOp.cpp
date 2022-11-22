#include<bits/stdc++.h>
#include "graphRepr.h"

using namespace std;
 

DiGraph::DiGraph(long V)
{
    this->V = V;
    adj.resize(V);
}
 
void DiGraph::addEdge(long v, long w)
{
    adj[v].push_back(w); // Add w to v’s list.
}


long DiGraph::getE()
{
    long rv = 0;
    for (auto i: adj)
        rv = rv + i.size();
    return rv;
}

vector< vector<long> > DiGraph::getAdjm ()
{
    vector< vector<long> > rv;
    for (long i = 0; i < adj.size() ; i++) 
    {
        rv.push_back(vector<long>( V, 0)) ;
        for (auto j: adj[i])
            rv[i][j] = 1;
    }
    return rv;
}
