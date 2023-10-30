#include <bits/stdc++.h>
using namespace std;

int octalToDecimal(int n) {
    int x = 1;
    int ans = 0;
    while(n > 0) {
        int r = n % 10;
        ans += x * r;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int main () {
    int n;
    cin>>n;
    cout<< octalToDecimal(n) << endl;
}