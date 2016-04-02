/*
But, to lock the door he needs a key that is an anagram of a certain palindrome string.

The king has a string composed of lowercase English letters. Help him figure out whether any anagram of the string can be a palindrome or not.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s;
    cin>>s;
    int t[26]={};
    int n, even=0, odd=0;
    int flag = 1;
    n = s.size();
    for (int i = 0; i < n; i ++) {
        t[s[i]-97]++;
    }
    for (int i = 0; i < 26; i ++) {
        if(t[i]%2 ==0) even++;
        else odd++;
    }
    if (n%2 == 0) {
        if (odd > 0) flag = 0;
    } else {
        if (odd != 1) flag = 0;
    }
     
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
