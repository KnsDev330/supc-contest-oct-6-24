#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;

   int r = 0;
   int n;

   while(t--) {
      cin >> n;

      if(n <= 9) {
         r = n;
      }
      else if(n <= 90) {
         r = (9 + (n / 10));
      }
      else if(n <= 900) {
         r = (9 + 9 + (n / 100));
      }
      else if(n <= 9000) {
         r = (9 + 9 + 9 + (n / 1000));
      }
      else if(n <= 90000) {
         r = (9 + 9 + 9 + 9 + (n / 10000));
      }
      else if(n <= 900000) {
         r = (9 + 9 + 9 + 9 + 9 + (n / 100000));
      }
      else if(n <= 9000000) {
         r = (9 + 9 + 9 + 9 + 9 + 9 + (n / 1000000));
      }

      cout << r << endl;
   }

   return 0;
}