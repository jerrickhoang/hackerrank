/*https://www.hackerrank.com/challenges/anagram*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, m, res = 0;
    string s, s1, s2;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> s;
        if (s.size() %2 != 0) {
            cout << -1 << endl;
            continue;
        }
        res = 0;
        m = s.size()/2;
        int t1[26]={}, t2[26]={};
        s1 = s.substr(0, m);
        s2 = s.substr(m);
        for (int j = 0; j < m; j ++) {
            t1[s1[j]-97] ++;
            t2[s2[j]-97] ++;
        }
        for (int j = 0; j < 26; j ++) {
            if (t1[j] > t2[j]) {
                res += t1[j] - t2[j];
            }
        }
        cout << abs(res) << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

