#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int64_t a[n];
    int64_t m, mi;
    for (unsigned int i =0; i <n; i++){
        cin >>a[i];
    }
    sort(a, a+n);
    
    mi = abs(a[1]-a[0]);
    for (int i =1; i <n-1; i++){
        m = abs(a[i+1]-a[i]);
        if (m < mi) {
            mi = m;
        }
    }
    for (int i=0; i< n-1; i++){
        m = abs(a[i+1]-a[i]);
        if (m == mi) {
            cout << a[i] << " " << a[i+1] << " ";
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
