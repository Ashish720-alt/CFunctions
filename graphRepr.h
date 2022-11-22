#include<bits/stdc++.h>
using namespace std;
 


// This class represents a directed graph using
// adjacency list representation
class DiGraph
{
    long V;    // No. of vertices; Vertices are labelled from 0, 1, ... V-1.
 
    vector<list<long>> adj;      // Vector of (Integer) Lists

    map< long, vector<long> > BFS_d;  // Distances of breadth first tree for given source
    map< long, vector<long> > BFS_pi;  // Predecessor vertices of breadth first tree for given source

    vector<long> DFS_d;  // Discovery times of depth first tree for given source
    vector<long> DFS_f;  // Finishing times of depth first tree for given source
    vector<long> DFS_pi; // Predecessor vertices of depth first tree for given sources

public:
    
    // DiGraph Operations
    DiGraph(long V);  // Constructor
     
    void addEdge(long v, long w); // Function to add an edge to graph

    long getE(); // Function to get total number of edges

    vector< vector<long> > getAdjm (); // Function to get adjacency matrix
    
    // DiGraph Searches
    void BFS(long src , bool print , bool compute_BFS_tree);  // BFS Traversal from source s, O(V + E) time complexity

    void computeBFSTree (long src); // Computes BFS tree distances and BFS tree predecessors if not already computed.

    void DFSVisit(long v, bool visited[], long& time, bool print, bool computeDFStimes);  // DFS Traversal from source v, O(V + E) time complexity

    void DFS(bool print, bool computeDFStimes);   // DFS Traversal for whole graph, O(V + E) time complexity

    void computeDFSTimes ();

};
 