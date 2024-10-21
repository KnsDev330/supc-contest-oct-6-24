#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;

   while(t--) {
      int a, b;
      cin >> a >> b;

      int each = a / b;
      int used = each * b;
      int rem  = a - used;

      if(rem > b / 2) {
         used += b / 2;
      }
      else {
         used += rem;
      }

      cout << used << endl;
   }

   return 0;
}