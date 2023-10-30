#include <bits/stdc++.h>
using namespace std;

int main() {
      // -10^9 < int < 10^9

      // -10^12 < long int < 10^12

      //  -10^18 < long long int < 10^18

      int a = 100000;
      int b = 100000;
      cout<<a*b<<endl; //overflow error int range exceeds
      int max = INT_MAX;
      cout<<max + 1<<endl; //negative cycle

      return 0;
}