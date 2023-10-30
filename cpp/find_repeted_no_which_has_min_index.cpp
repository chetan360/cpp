#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int minIdx = INT_MAX;

    static int N = 1e5 + 2;//max length array for store indices

    int idx[N];
    for(int i=0; i<N; i++) {
        idx[i] = -1;
    }

    for(int i=0; i<n; i++) {
        if(idx[arr[i]] != -1) {
            //store min index in minIdx if elt is repeate in idx array index
            minIdx = min(minIdx, idx[arr[i]]);
        } else {
            idx[arr[i]] = i;
        }
    }

    if(minIdx == INT_MAX) {
        cout<<"-1";
    } else {
        cout<<minIdx + 1;
    }

    return 0;
}