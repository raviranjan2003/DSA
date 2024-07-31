#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    bool ans;
    if(i >= j) return true;
    if(s[i] != s[j]) return false;

    return checkPalindrome(s, i+1, j-1);

    // return ans;
}

int main(){
    string s = "ravi";

    cout<< checkPalindrome(s, 0, s.size()-1)<<endl;

    return 0;
}