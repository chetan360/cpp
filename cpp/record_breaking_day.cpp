/* day is record breaking if it satisfy
   1)it is greatest among prev days
   2)it is greater than next day
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n+1];
    arr[n+1] = -1;
    //last is grater for 2nd condition no need to check 2nd condition
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    
    int c = 0;
    int mx = 0;

    for(int i=0; i<n; i++) {
        //check 1st & 2nd condition
        if(mx < arr[i] && arr[i] > arr[i+1]) {
            c++;
        }
        mx = max(mx, arr[i]);
    }

    cout<<c;

    return 0;
}