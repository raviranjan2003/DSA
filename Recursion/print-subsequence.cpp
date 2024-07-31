#include<bits/stdc++.h>
using namespace std;

void printSub(vector<int> &arr, vector<int> &list, int ind, int n){
    if(ind == n){
        for(auto it: list){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    //Take
    list.push_back(arr[ind]);
    printSub(arr, list, ind+1, n);

    //Not take
    list.pop_back();
    printSub(arr, list, ind+1, n);

}

int main(){
    vector<int> arr{3,1,2};
    vector<int> list;

    printSub(arr, list, 0, arr.size());

    return 0;
}