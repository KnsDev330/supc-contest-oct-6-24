#include <bits/stdc++.h>
using namespace std;

int main() {
   int n, x;

   cin >> n;

   bool a[n] = {false};

   for(size_t i = 0; i < n; i++) {
      cin >> x;
      a[x - 1] = true;
   }

   for(size_t i = 0; i <= n; i++) {
      if(!a[i]) {
         cout << i + 1;
         break;
      }
   }

   return 0;
}