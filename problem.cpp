#include<bits/stdc++.h>
#include <iostream>
#include "graphRepr.h"
#include "pairingfunction.h"
#include "printSTLcontainers.h" 


using namespace std;

int main(){
    DiGraph a = DiGraph(10);
    a.addEdge(1,2);
    a.addEdge(2,3);
    a.addEdge(3,4);
    a.addEdge(1,5);
    cout << a.getAdjm()[2][3] << a.getE() ;
    a.BFS(1, true, false);
    cout << endl;

    a.DFS( true, true);

    // vector<long> A{ 10, 20, 30 };
    // long T = pair_k_Integers( A , &pairCantor);
    // cout << T << endl;
    // vector<long> s = unpair_k_Integers ( T , &unpairCantor );
    // for (auto it: s)
    //     cout << it << endl;

    // vector<int> A{ 10, 20, 30 };
    // list<int> B (4,100);  
    // stack<int> C ; 
    // C.push(100);
    // C.push(-10);
    // C.push(5);
    // queue<int> D;
    // D.push(100);
    // D.push(-10);
    // D.push(5);


    // int E1[]= {10,20,30,40,50};
    // set<int> E (E1,E1+5);

    // print_vector(A, true);
    // print_list(B, true);
    // print_stack (C, true);
    // print_queue (D, true);
    // print_set(E, true);

    // map<char,int> F;

    // F['a']=10;
    // F['b']=30;
    // F['c']=50;
    // F['d']=70;
    // print_map(F, true);

    return 0;
}