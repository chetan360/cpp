//time complexity O(n)
#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
        }
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

    int idx = linear_search(arr, n, key);

    if(idx == -1) {
        cout<<"Not found";
    } else {
        cout<<"Found at "<<idx;
    }

    return 0;
}