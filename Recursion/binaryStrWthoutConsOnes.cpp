#include<bits/stdc++.h>
using namespace std;

// Generate all binary strings without consecutive ones

void genBinary(vector<int> &temp, int n, int k) {
    if(n == k) {
        for(auto it : temp) {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    if(n == 0) {
        temp[0] = 0;
        genBinary(temp, n+1, k);

        temp[0] = 1;
        genBinary(temp, n+1, k);
    }else {
        if(temp[n-1] == 1) {
            temp[n] = 0;
            genBinary(temp, n+1, k);
        }else{
            temp[n] = 0;
            genBinary(temp, n+1, k);

            temp[n] = 1;
            genBinary(temp, n+1, k);
        }
    }
}

int main() {
    int k = 5;
    vector<int> temp(k);
    genBinary(temp, 0, k);
    return 0;
}
