#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, n;
   string s;

   cin >> t;

   while(t--) {
      cin >> n >> s;

      unordered_map<string, bool> m;
      unordered_map<string, int> pos;

      string str = "NO";
      for(size_t i = 0; i < s.size() - 1; i++) {
         string key = string(1, s[i]) + string(1, s[i + 1]);

         if(m[key]) {
            if(pos[key] != i) {
               str = "YES";
               break;
            }
         }
         else {
            m[key]   = true;
            pos[key] = i + 1;
         }
      }

      cout << str << endl;
   }

   return 0;
}