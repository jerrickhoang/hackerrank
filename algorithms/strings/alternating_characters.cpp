/*Shashank likes strings in which consecutive characters are different. 
For example, he likes ABABA, while he doesn't like ABAA. Given a string containing characters AA and BB only, 
he wants to change it into a string he likes. To do this, he is allowed to delete the characters in the string.

Your task is to find the minimum number of required deletions.

Input Format

The first line contains an integer TT, i.e. the number of test cases. 
The next TT lines contain a string each.

Output Format

For each test case, print the minimum number of deletions required.

Constraints

1≤T≤101≤T≤10 
1≤1≤ length of string ≤105≤105
Sample Input

5
AAAA
BBBBB
ABABABAB
BABABA
AAABBB
Sample Output

3
4
0
0
4
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int count =0;
        string s;
        cin >> s;
        for (int j = 0; j < s.size() - 1; j ++) {
            if (s[j] == s[j+1]) count ++;
        }
        cout << count << endl;
    }
    return 0;
}
