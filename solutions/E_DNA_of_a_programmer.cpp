#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;

   int a[300] = {0};

   char last_char = s[0];
   int count      = 1;
   int max        = 1;
   int i          = 0;

   while(true) {
      i++;
      if(i == 1) continue;
      char c;
      while(cin.get(c)) {
         if(c == last_char) {
            count++;
            continue;
         }

         if(count > a[last_char]) a[last_char] = count;

         count     = 1;
         last_char = c;
      }
      break;
   }

   for(int i = 'A'; i <= 'z'; i++) {
      if(a[i] > max) max = a[i];
   }

   cout << max;

   return 0;
}
