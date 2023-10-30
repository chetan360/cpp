//time complexity in worst case O(n)
//if key found one comp. is less than linear search
#include <iostream>
using namespace std;

int sentinel_search(int arr[], int n, int key) {
    int sentinel = arr[n-1];
    arr[n-1] = key;

    int i=0;
    while(arr[i] != key) {
        i++;
    }
    arr[n-1] = sentinel;

    if(i < n-1 || arr[n-1] == key) {
        return i;
    }

    return -1;
}

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    int idx = sentinel_search(arr, n, key);

    if(idx == -1) {
        cout<<"Not found";
    } else {
        cout<<"Found at "<<idx;
    }

    return 0;
}