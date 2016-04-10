#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i ++) {
        int64_t h[1000001]={};
        for (int j = 0; j < 10; j ++) { 
            //cout << h[j] << " ";
        }
        int n;
        cin >> n;
        int64_t x[n]={};
        for (size_t j =0; j <n; j++) {
            cin >> x[j];
            h[x[j]]++;
        }
        int64_t res =0;
        for (size_t j =1; j <= 1000000; j++) {
            res += h[j] * (h[j] - 1);
        }
        cout << res << endl;

    }
    return 0;
}
