/*https://www.hackerrank.com/challenges/palindrome-index*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s, int n, int m) {
    for (int i = n, j=m-1;i<j; i ++,j--) {
        if (s[i] != s[j]) return false;
    }
    return true;
}


int main() {
    int n,m ;
    bool flag = false;
    string s;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        flag = false;
        cin >> s;
        m = s.size();
        for (int j=0, k=m-1; j<k; j++,k--) {
            if (s[j] != s[k]) {
                if (isPalindrome(s, j+1, k+1)) {
                    cout << j << endl;
                    flag = true;
                    break;
                }
                if (isPalindrome(s, j, k)) {
                    cout << k << endl;
                    flag = true;
                    break;
                }
            }
        }
        if (!flag) {
            cout << -1 << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
