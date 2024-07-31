#include<bits/stdc++.h>
using namespace std;

void reverseArr(vector<int> &arr, int i, int j){

    if(i >= j) return;

    swap(arr[i], arr[j]);

    reverseArr(arr, i+1, j-1);
    // return arr;

}
int main(){
    vector<int> arr{1, 2, 3, 4, 5};

    vector<int> ans;
    reverseArr(arr, 0, arr.size()-1);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}