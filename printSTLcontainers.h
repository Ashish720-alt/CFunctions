#include<bits/stdc++.h>
#include <iostream>

using namespace std;

// Print Non Recursive STL containers
template <class T> void print_vector( vector<T> V, bool newline) ;
template <class T> void print_list( list<T> L, bool newline) ;
template <class T> void print_stack ( stack<T> S, bool newline);
template <class T> void print_queue ( queue<T> Q, bool newline);
template <class T> void print_set( set<T> S, bool newline);
template <class T1, class T2> void print_map( map<T1, T2> M, bool newline) ;