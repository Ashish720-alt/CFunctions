#include<bits/stdc++.h>
#include <math.h>

using namespace std;


// Pairs two Whole numbers x and y.
long pairCantor (long x, long y) {
    return (x*x + x + 2*x*y + 3*y + y*y)/ 2 ;
}

pair<long, long> unpairCantor (long z) {
    long w = floor( (sqrt(8* long(z) + 1) - 1)/2.0) ;
    long t = (w + w*w)/2 ;
    return pair<long, long> ( w - z + t, z - t);
}

long pairIntegers (long x, long y, long (*pairFunc) (long, long)) {
    long s;
    if (x >= 0 && y >= 0)
        s = 0;
    else if (x < 0 && y >= 0)
        s = 1;
    else if (x >= 0 && y < 0)
        s = 2;
    else
        s = 3;
    return 4 * pairFunc(abs(x), abs(y)) + s;
}

pair<long, long> unpairIntegers (long z, pair<long,long> (*unpairFunc) (long) ) {
    long s = z % 4;
    pair<long, long > rv = unpairFunc( (z - s)/4 );
    if (s == 1)
        rv.first = -1 * rv.first;
    else if (s == 2)
        rv.second = -1 * rv.second;
    else if (s == 3) {
        rv.first = -1 * rv.first;
        rv.second = -1 * rv.second;
    }
    return rv;
}

long pair_k_Integers (vector<long> I, long (*pairFunc) (long, long)) {
    long Z;
    for(long i = I.size() - 2; i >= 0; i--)
    {
        if (i == I.size() - 2)
            Z = pairIntegers( I[i] , I[i+1] , pairFunc );
        else
            Z = pairIntegers( I[i] , Z , pairFunc  );
    }
    return pairIntegers( I.size() , Z , pairFunc );
}

vector<long> unpair_k_Integers (long Z, pair<long, long> (*unpairFunc) (long)) {
    pair<long, long> p = unpairIntegers( Z , unpairFunc );
    long k = p.first;
    vector<long> rv;
    for (long i = 0 ; i < k - 1; i++) {
        p = unpairIntegers(p.second, unpairFunc);
        rv.push_back(p.first);
    }
    rv.push_back(p.second);
    return rv;
}