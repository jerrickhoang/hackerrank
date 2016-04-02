/*You are given two strings, AA and BB. Find if there is a substring that appears in both AA and BB.

Input Format

Several test cases will be given to you in a single file. The first line of the input will contain a single integer TT, the number of test cases.

Then there will be TT descriptions of the test cases. Each description contains two lines. The first line contains the string AA and the second line contains the string BB.

Output Format

For each test case, display YES (in a newline), if there is a common substring. Otherwise, display NO.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int n;
    string s1, s2;
    bool f;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        f = false;
        cin >> s1;
        cin >> s2;
        for (int j = 0; j < s1.size(); j ++) {
            if (s2.find(s1[j]) != string::npos) {
                f = true;
                break;
            }
        }
        if (f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


