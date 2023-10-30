//time complexity O(n^6)
#include <bits/stdc++.h>
using namespace std;

void counting_sort(int arr[], int n, int pos) {
    int o[n];
    int c[10] = {0};
    
    for(int i=0; i<n; i++) {
        ++c[(arr[i]/pos)%10];
    }

    //cumulative sum
    for(int i=1; i<10; i++) {
        c[i] += c[i-1];
    }

    for(int i=n-1; i>=0; i--) {
        o[--c[(arr[i]/pos)%10]] = arr[i];
    }

    for(int i=0; i<n; i++) {
        arr[i] = o[i];
    }
}

void radix_sort(int arr[], int n) {
    int max, c, pos=1;
    //find max elt from arr
    max = *max_element(arr, arr+n);
    //count digits of max elt
    c = (max==0)? 1: log10(max)+1;

    while(c>0) {
        counting_sort(arr, n, pos);
        pos *= 10;
        c--;
    }
}

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    radix_sort(arr, n);

    for(auto x : arr) {
        cout<<x<<" ";
    }

    return 0;
}