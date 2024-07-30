#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-2; i++){
        int minIndex = i;
        for(int j=i; j<n-1; j++){
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        int temp = arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    selectionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
