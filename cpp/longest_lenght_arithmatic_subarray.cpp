/* find max length arithmatic subarray
        arithmatic subarray is the sequence which is obtain same ans 
   after any arithmatic operation on contiguous elsts.

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int ans = 2;
    int len = 2; //lenght of shortest arithmatic subarray is 2
    int pd = arr[0] - arr[1];
    for(int i=2; i<n; i++) {
        //compare prev and current diff.
        if(pd == arr[i] - arr[i-1]) {
            //if difference is equal then increment length of subarray
            len++;
        } else {
            //if difference is unequal then update prev difference & length of subarray with min length 2
            pd = arr[i] - arr[i-1];
            len = 2;
        }
        //update max arithmetic subarray len
        ans = max(ans, len);
    }

    cout<<ans;

    return 0;
}