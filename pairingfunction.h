#include<bits/stdc++.h>
#include <math.h>

using namespace std;

// Only for 2 whole numbers
long pairCantor (long x, long y) ; // If x, y are O(n) bits, then time complexity = O(M(n) + S(n)) = O(n^2) as naive, best is O(n * log n * log log n)
                                // where M(n) and S(n) are time complexities for multipliying 
                                // and adding two n bit numbers. 
                                   
pair<long, long> unpairCantor (long z) ; // If z is O(n) bits, then time complexity = O(Sq(n)) = O(n), where Sq(n) is the best time complexity for
                                      // the square root of a n bit number.

// Pair any 2 integers, using a pairing scheme for whole numbers
long pairIntegers (long x, long y, long (*pairFunc) (long, long));   // Has same time complexity as pairFunc
pair<long, long> unpairIntegers (long z, pair<long,long> (*unpairFunc) (long) ) ; // Has same time complexity as unpairFunc


// Pair any k integers, using a pairing scheme for whole numbers; 
// Issue: Paired Number blows up in size very quickly
long pair_k_Integers (vector<long> I, long (*pairFunc) (long, long)) ; // For k numbers with bit complexity O(n), time complexity is O(pairFunc(n)) * k
vector<long> unpair_k_Integers (long Z, pair<long, long> (*unpairFunc) (long) ); // For k numbers with bit complexity O(n), time complexity is O(unpairFunc(n)) * k