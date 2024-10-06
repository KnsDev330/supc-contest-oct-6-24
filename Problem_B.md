> ### Problem Overview

In the problem description we encounter a special type of integer, which is called `Zenitsu integer`.

We can call an integer `Zenitsu integer` if it contains ***exactly*** `1` non-zero digit.

For example `1230034` is not a `Zenitsu integer` as it contains *1-2-3-3-4* , a total of `4` digits which are not `0`.

But `100, 2, 1000, 7000, 90` are all `Zenitsu integer` because they all contain only `1` digit which is not `0`.
<br/><br/>

> ### Solution Approach

If an integer can only contain `1` non-zero digit, we can safely count the first 9 integers as `Zenitsu integer`, as the integers {1, 2, 3, 4, 5, 6, 7, 8, 9} all contains exactly `1` digit which is not `0`.

Now for `10 to 99`, we can have, again, a total of 9 integers which contains exactly `1` non-zero digit, which are {10, 20, 30, 40, 50, 60, 70, 80, 90}. All the other integers in the range 10 to 99 contains `2` non-zero digits.

For `100 to 999`, there are again only 9 integers which contains exactly `1` non-zero digit, {100, 200, 300, 400, 500, 600, 700, 800, 900}. Every other integers in this range either contains `3` non-zero digits (like 333/999/213 etc.), or `2` non-zero digits (like 110/230/203 etc.)

For range `1000 to 9999`, we will again have only 9 numbers which contains exactly `1` non-zero digit, {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000}. All the other numbers will have either `4` or `3` or `2` non-zero digits.

This trend will continue for any other ranges like, 10000 to 99999, 100000 to 999999, 1000000 to 9999900, etc.
<br/><br/>

> ### Pseudo code

We will be given an integer `T`, the total number of test cases. (`T` can be any number between 1 and 10000 inclusive)

Next `T` lines will contain an integer `N` (`N` can be any number between 1 and 999999 inclusive). For each test case we need to print out the total number of `Zenitsu integer`'s in the range `1 to N`


```
declare T and N
take input T

loop for T times:
   declare count

   if N is less than or equal to 9:
      set count to N                                    // ------ (i)
   else if N is less than or equal to 99:
      set count to 9 + (N/10)                           // ------ (ii)
   else if N is less than or equal to 999:
      set count to 9 + 9 + (N/100)                      // ------ (iii)
   else if N is less than or equal to 9999:
      set count to 9 + 9 + 9 + (N/1000)                 // ------ (iv)
   else if N is less than or equal to 99999:
      set count to 9 + 9 + 9 + 9 + (N/10000)            // ------ (v)
   else if N is less than or equal to 999999:
      set count to 9 + 9 + 9 + 9 + 9 + (N/100000)      // ------ (vi)

   output count and a newline
```
<br/>

(i). We set `count` to `N` because `N` can be any integer between `1 to 9`. So if `N` is let's say `6` the `count` is set to `6` as there are 6 integers in range `1 to 6` which contains exactly `1` non-zero digit {1, 2, 3, 4, 5, 6} = 6.

<br/>

(ii). For `N` of range `1 to 99`, we first add `9` to our `count` as `1 to 9` contains 9 integers, each with exactly one non-zero digit. (we can safely count the first 9 integers as `N` will be `greater than 9`,, because if not, we would be inside the first `if` condition, not the second).

Then we divide `N` by `10`, so if `N` is 49, then 49/10 = 4, and we do have only 4 integers which contains exactly `1` non-zero digit {10, 20, 30, 40}. And if `N` is 51, then 51/10 = 5, and we also do have {10, 20, 30, 40, 50} = 5 integers.

So we add up and set count to:

`1 to 9` = `9`

`11 to N` = `N/10`

`count = 9 + N/10`

<br/>

(iii). For `N` of range `1 to 999`, we similarly add up first `1 to 9 = 9` and `10 to 99 = 9` single non-zero digit integers, then we divide the input by 100 which will give us the number of integers which contains exactly `1` non-zero digit for the range `100 to N` (for example `N` is 760, 760/100 = 7, and there are 7 integers in the range `100 to 760`, {100, 200, 300, 400, 500, 600, 700} = 7 ).

So we add up and set count to:

`1 to 9` = `9`

`11 to 99` = `9`

`100 to N` = `N/100`

`count = 9 + 9 + N/100`


(iv), (v), (vi). we can add the number of integers  which contains single non-zero digit by following the procedure mentioned above for the ranges `1 to 9999`, `1 to 99999`, `1 to 999999` etc.


<br/>

> ### C++ code

```cpp
#include <bits/stdc++.h>
using namespace std;


int main() {
   int t, n;
   cin >> t;

   while(t--) {
      cin >> n;

      int count;

      if(n <= 9) {
         count = n;
      }
      else if(n <= 99) {
         count = 9 + (n / 10);
      }
      else if(n <= 999) {
         count = 9 + 9 + (n / 100);
      }
      else if(n <= 9999) {
         count = 9 + 9 + 9 + (n / 1000);
      }
      else if(n <= 99999) {
         count = 9 + 9 + 9 + 9 + (n / 10000);
      }
      else if(n <= 999999) {
         count = 9 + 9 + 9 + 9 + 9 + (n / 100000);
      }

      cout << count << endl;
   }

  return 0;
}
```