#include<bits/stdc++.h>
using namespace std;

int sum1(int n, int &ans){
    if(n < 1) return ans;
    ans += n;
    sum1(n-1, ans);
    return ans;

    // if(n < 1) {
    //     cout<<ans<<endl;
    //     return;
    // }
    // sum1(n-1, ans+n);
}

int sum2(int n){
    if(n < 1) return 0;

    return n + sum2(n-1);
}

int main(){
    int n = 10;
    // cin>>n;
    int ans = 0;
    cout<<sum1(n, ans)<<endl;
    cout<<sum2(n)<<endl;

    return 0;
}