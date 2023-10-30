//time complexity O(log(n))
#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key) {
    int lb = 0;
    int ub = n-1;

    while(lb <= ub) {
        int mid = (lb+ub) / 2;
        if(arr[mid] == key) {
            return mid;
        } else if(key < arr[mid]) {
            ub = mid-1;
        } else {
            lb = mid+1;
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

    int idx = binary_search(arr, n, key);

    if(idx == -1) {
        cout<<"Not found";
    } else {
        cout<<"Found at "<<idx;
    }

    return 0;
}