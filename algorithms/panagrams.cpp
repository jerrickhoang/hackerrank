/*Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly, because it is a pangram. (Pangrams are sentences constructed by using every letter of the alphabet at least once.)

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence ss, tell Roy if it is a pangram or not.

Input Format

Input consists of a string ss.

Constraints 
Length of ss can be at most 103103 (1≤|s|≤103)(1≤|s|≤103) and it may contain spaces, lower case and upper case letters. Lower-case and upper-case instances of a letter are considered the same.

Output Format

Output a line containing pangram if ss is a pangram, otherwise output not pangram.

Sample Input

Input #1

We promptly judged antique ivory buckles for the next prize    
Input #2

We promptly judged antique ivory buckles for the prize    
Sample Output*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char c;
    bool res = true;
    int hist[26] = {};
    while (cin >> c) {
        hist[int(tolower(c))-97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (hist[i] == 0) {
            res = false;
            break;
        }
    }
    if (res) cout << "pangram" << endl;
    else cout << "not pangram" << endl;
    return 0;
}


