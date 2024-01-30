#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    string check = "";
    for(int i = 0 ; i < s.size() ; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
            check += s[i]; 
    };
    int n = check.size();
    for(int i = 0 ; i < n/2 ; i++) {
        if(check[i] != check[n-i-1]) return false;
    }
    return true;
}