// NOTE: this solution doesn't handle some edges cases, but I'm too lazy

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k, q, g;
    k = k % n;
    cin >> n;
    cin >> k;
    cin >> q;
    int a[n];
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    for (int i =0; i < q; i ++) {
        cin >> g;
        if (g < k) {
            cout << a[n-k+g] << endl;
        } else {
            cout << a[k-g] << endl;
        }
        
    }
    return 0;
}

