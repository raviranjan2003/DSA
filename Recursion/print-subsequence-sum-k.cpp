#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &arr, vector<int> &ans, int ind, int n, int s, int sum) {
    
    if(ind == n) {
        if(s == sum) {
            for(auto it : ans) {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //take
    ans.push_back(arr[ind]);
    // s += arr[ind];
    print(arr, ans, ind+1, n, s+arr[ind], sum);

    //Not take
    ans.pop_back();
    // s -= arr[ind];
    print(arr, ans, ind+1, n, s, sum);

}

int main(){
    vector<int> arr{1,2,1};
    vector<int> ans;

    print(arr, ans, 0, arr.size(), 0, 2);
    return 0;
}