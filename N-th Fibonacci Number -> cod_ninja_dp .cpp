#include <bits/stdc++.h> 
const int mod = 1e9+7;

int table[1000001] = {0};
int previousCal = 2; // stores the index of previously max calculated value;

int fibonacciNumber(int n){
    if (n==0 or n==1) return n;
    if (table[n] != 0) return table[n];

    table[0] = 0;
    table[1] = 1;

    for (int i=previousCal; i<=n; i++) {
        table[i] = (table[i-1] + table[i-2]) % mod;
        previousCal++; // updating the index to latest max value
    }

    return table[n];
}
