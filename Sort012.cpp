#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   vector<int>count = {0, 0 , 0};
   for (int i = 0; i < n; i++) {
     count[arr[i]]++;
   }
   int curr = 0;
   for (int i = 0; i < n; i++) {
      if (count[curr] == 0) {
         curr++;
         i--;
         continue;
      }
      arr[i] = curr;
      count[curr]--;
   }
}