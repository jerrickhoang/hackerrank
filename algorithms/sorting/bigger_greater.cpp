#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i ++) {
        cin >> s;
        if (next_permutation(s.begin(), s.end())) {
            cout << s << endl;
        } else {
            cout << "no answer" << endl;
        }
    }
    
    
    return 0;
}
