#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int lb, int mid, int ub, int n) {
    int i = lb;
    int k = lb;
    int j = mid+1;
    int b[n];

    while(i<=mid && j<=ub) {
        if(arr[i] < arr[j]) {
            b[k++] = arr[i++];
        } else {
            b[k++] = arr[j++];
        }
    }

    while(i<=mid) {
        b[k++] = arr[i++];
    }

    while(j<=ub) {
        b[k++] = arr[j++];
    }

    for(int i=0; i<ub; i++) {
        arr[i] = b[i];
    }
}

void mergeSort(int arr[], int lb, int ub, int n) {
    if(lb < ub) {
        int mid = (lb+ub)/2;
        mergeSort(arr, lb, mid, n);
        mergeSort(arr, mid+1, ub, n);
        merge(arr, lb, mid, ub, n);
    }
}

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1, n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}