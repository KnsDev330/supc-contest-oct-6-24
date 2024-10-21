#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;

   cin >> n;
   n *= 2;

   int a[n];

   for(size_t i = 0; i < n; i++) {
      cin >> a[i];
   }

   int r = 0;

   for(size_t i = 0; i < n - 2; i++) {
      if(a[i] == a[i + 2]) r++;
   }

   cout << r;

   return 0;
}