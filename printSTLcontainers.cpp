#include<bits/stdc++.h>
#include <iostream>

using namespace std;

template <class T> void print_vector( vector<T> V, bool newline) {
    cout << "< ";
    for (int i = 0; i < V.size() ; i++)
        if (i != V.size() - 1)
            cout << V[i] << " , ";
        else
            cout << V[i] << " ";
    cout << ">";
    if (newline)
    cout << endl;
}

template <class T> void print_list( list<T> L, bool newline) {
    cout << "[ ";
    for (typename list<T>::iterator it = L.begin() ; it != L.end(); it++)
        if (it != prev(L.end()) )
            cout << *it << " , ";
        else
            cout << *it << " ";
    cout << "]";
    if (newline)
    cout << endl;
}

template <class T> void print_stack ( stack<T> S, bool newline) {
    cout << "( ";
    while (!S.empty()) {
        if (S.size() != 1) {
            cout << S.top() << " , ";
            S.pop();
        }
        else {
            cout << S.top() << " ";
            S.pop();
        }        
    }
    cout << ")";
    if (newline)
    cout << endl;
}

template <class T> void print_queue ( queue<T> Q, bool newline) {
    cout << "( ";
    while (!Q.empty()) {
        if (Q.size() != 1) {
            cout << Q.front() << " , ";
            Q.pop();
        }
        else {
            cout << Q.front() << " ";
            Q.pop();
        }        
    }
    cout << ")";
    if (newline)
    cout << endl;
}

template <class T> void print_set( set<T> S, bool newline) {
    cout << "{ ";
    for (typename set<T>::iterator it = S.begin() ; it != S.end(); it++)
        if (it != prev(S.end()) )
            cout << *it << " , ";
        else
            cout << *it << " ";
    cout << "}";
    if (newline)
    cout << endl;
}

template <class T1, class T2> void print_map( map<T1, T2> M, bool newline) {
    cout << "{ ";
    for (typename map<T1, T2>::iterator it = M.begin() ; it != M.end(); it++)
        if (it != prev(M.end()) )
            cout << it->first << " : " << it->second << " , ";
        else
            cout << it->first << " : " << it->second << " ";
    cout << "}";
    if (newline)
    cout << endl;
}


    