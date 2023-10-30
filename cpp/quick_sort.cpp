#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int lb, int ub) {
    int dn = lb+1;
    int pivot = arr[lb];
    int up = ub;

    do {
        while(arr[dn] < pivot && dn <= ub) {
            dn++;
        }
        while(arr[up] > pivot && up > lb) {
            up--;
        }
        if(dn < up) {
            int t = arr[dn];
            arr[dn] = arr[up];
            arr[up] = t;
        }
    } while(dn < up);

    arr[lb] = arr[up];
    arr[up] = pivot;

    return up;
}

void quickSort(int arr[], int lb, int ub) {
    if(lb < ub) {
        int pi = partition(arr, lb, ub);
        quickSort(arr, lb, pi-1);
        quickSort(arr, pi+1, ub);
    }
}

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}