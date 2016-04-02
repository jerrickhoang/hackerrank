#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, flag=1;
    cin >> n;
    string s;
    for (int i=0; i < n; i ++) {
        cin >> s;
        flag =1;
        for (int j=1,k=s.size()-2;j<s.size();j++,k--) {
            if (abs(s[j]-s[j-1])!=abs(s[k]-s[k+1])) {
                flag =0;
                break;
            }
        }
        if (flag == 1) cout << "Funny" << endl;
        else cout << "Not Funny" << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

