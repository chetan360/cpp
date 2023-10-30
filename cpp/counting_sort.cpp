//time complexity O(n+k)
#include <iostream>
using namespace std;

void counting_sort(int arr[], int n) {
    int o[n];
    int c[10] = {0};
    
    for(int i=0; i<n; i++) {
        ++c[arr[i]];
    }

    //cumulative sum
    for(int i=1; i<10; i++) {
        c[i] += c[i-1];
    }

    //for 
    for(int i=n-1; i>=0; i--) {
        o[--c[arr[i]]] = arr[i];
    }

    for(int i=0; i<n; i++) {
        arr[i] = o[i];
    }
}

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    counting_sort(arr, n);

    for(auto x : arr) {
        cout<<x<<" ";
    }

    return 0;
}