#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n <= 1) return n;

    // int last = fib(n-1);
    // int slast = fib(n-2);

    // return last + slast;

    return fib(n-1) + fib(n-2);
}

int main(){

    cout<<fib(8)<<endl;

    return 0;
}