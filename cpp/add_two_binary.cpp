#include <bits/stdc++.h>
using namespace std;

int addBinary(int a, int b) {
    int ans = 0;
    int prevCary = 0;
    while(a>0 && b>0) {
        if(a%2 == 0 && b%2 == 0) {
            ans = ans * 10 + prevCary;
            prevCary = 0;
        } else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)) {
            if(prevCary == 1) {
                ans = ans * 10 + 0;
                prevCary = 1;
            } else {
                ans = ans * 10 + 1;
                prevCary = 0;
            }
        } else {
            ans = ans * 10 + prevCary;
            prevCary = 1;
        }
        a /= 10;
        b /= 10;
    }

    while(a>0) {
        if(prevCary == 1) {
            if(a%2 == 1) {
                ans = ans * 10 + 0;
                prevCary = 1;
            } else {
                ans = ans * 10 + 1;
                prevCary = 0;
            }
        } else {
            ans = ans *10 + (a%2);
        }
        a /= 10;
    }
    while(b > 0) {
        if(prevCary == 1) {
            if(b%2 == 1) {
                ans = ans * 10 + 0;
                prevCary = 1;
            } else {
                ans = ans * 10 + 1;
                prevCary = 0;
            }
        } else {
            ans = ans *10 + (a%2);
        }
        b /= 10;
    }
    return ans;
}

int main() {
    int a, b;
    cin>>a>>b;
    cout << addBinary(a, b);    
    return 0;
}